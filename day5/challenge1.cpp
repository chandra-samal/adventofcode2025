#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void fast_io() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
    string input;
    vector<string> shelf;
    vector<string> query;
    while (cin>>input){
        if (input.find('-')!=string::npos) shelf.emplace_back(input);
        else query.emplace_back(input);
    }
    int ans = 0;
    for(string q:query){
        long long key = stoll(q);
        bool found = false;
        for (string s:shelf){
            if (found) break;
            int i = (int)s.find('-');
            long long start = stoll(s.substr(0, i));
            long long end = stoll(s.substr(i+1, s.size()- i-1));
            if (key>=start && key<=end) {ans++; found=true;}
        }
    }
    cout << ans << '\n';
}

int main() {
    fast_io();

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    
    return 0;
}