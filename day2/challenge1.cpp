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
    cin >> input;
    vector<string> ids;
    for (int i = 0; i<input.size(); i++){
        if (input[i] == ',') input[i] = ' ';
    }
    stringstream hm(input);
    string temp;
    while (hm >> temp) ids.emplace_back(temp);
    long long ans = 0;
    
    for (int i = 0; i<ids.size(); i++){
        for (int j = 0; j<ids[i].size(); j++) if (ids[i][j]=='-') ids[i][j] = ' ';
        stringstream cm(ids[i]);
        string tmp;
        vector<string> ranges;
        while (cm>>tmp){
            ranges.emplace_back(tmp);
        }
        long long n1 = stoll(ranges[0]);
        long long n2 = stoll(ranges[1]);
        for (long long j = n1; j<=n2; j++){
            string num = to_string(j);
            if (num.size()%2) continue;
            int i = 0; int k = num.size()/2;
            bool invalid = true;
            for (k = num.size()/2; k<num.size(); k++){
                if (num[k]!=num[i]) {invalid = false; break;}
                i++;
            }
            if (invalid) ans+=j;
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