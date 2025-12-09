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
    string line;
    vector<vector<string>> sheet;
    while(getline(cin, line)) {
        stringstream hm(line);
        vector<string> line;
        string tmp;
        while(hm >> tmp) line.emplace_back(tmp);
        sheet.emplace_back(line);
    }

    int n = sheet.size();
    int m = sheet[0].size();
    // cout << m << "\n";
    // cout << n << "\n";
    long long ans = 0;
    for(int j = 0; j<m; j++){
        string opr = sheet[n-1][j];
        long long result = 0;
        if (opr=="*") result = 1;

        if (opr=="*"){
            for(int i = 0; i<n-1; i++) result*=stoll(sheet[i][j]);
        }
        else if (opr=="+"){
            for(int i = 0; i<n-1; i++) result+=stoll(sheet[i][j]);
        }
        // cout << result << '\n';
        ans+=result;
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