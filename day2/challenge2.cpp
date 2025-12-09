#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (long long)(x).size()

const long long MOD = 1e9 + 7;
const long long INF = 1e9;
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
    for (long long i = 0; i<input.size(); i++){
        if (input[i] == ',') input[i] = ' ';
    }
    stringstream hotmilf(input);
    string temp;
    while (hotmilf >> temp) ids.emplace_back(temp);
    long long ans = 0;
    
    for (long long i = 0; i<ids.size(); i++){
        for (long long j = 0; j<ids[i].size(); j++) if (ids[i][j]=='-') ids[i][j] = ' ';
        stringstream cutemilf(ids[i]);
        string tmp;
        vector<string> ranges;
        while (cutemilf>>tmp){
            ranges.emplace_back(tmp);
        }
        long long n1 = stoll(ranges[0]);
        long long n2 = stoll(ranges[1]);
        for (long long j = n1; j<=n2; j++){
            string num = to_string(j);
            vector<long long> factors;
            for (long long i = 1; i<=num.size()/2; i++) if (num.size()%i==0) factors.emplace_back(i);
            bool invalid = false;
            for (long long factor:factors){
                bool invalid_for_factor = true;
                string matchcase;
                long long i = 0;
                while (matchcase.size()!=factor) {matchcase+=num[i]; i++;}
                for (long long k = matchcase.size(); k<num.size(); k+=matchcase.size()){
                    string actualcase = num.substr(k, matchcase.size());
                    // cout << factor << " " << matchcase << " " << actualcase << '\n';
                    if (actualcase!=matchcase) { invalid_for_factor=false; break; }
                }
                if (invalid_for_factor) {invalid=true; break;}
            }
            if (invalid) {ans+=j;}
        }
    }
    cout << ans << '\n';
}

int main() {
    fast_io();

    long long t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    
    return 0;
}