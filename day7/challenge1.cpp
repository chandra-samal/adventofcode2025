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
    vector<string> grid;
    string input;
    while (cin>>input){
        grid.emplace_back(input);
    }
    int n = grid.size();
    int m = grid[0].size();
    for (int j = 0; j<m; j++){
        if (grid[0][j] == 'S') grid[1][j] = '|';
    }
    int ans = 0;
    for (int i = 2; i<n; i++){
        for(int j = 0; j<m; j++){
            if (grid[i][j] == '^' && grid[i-1][j] == '|') {
                // grid[i][j-1] = '|'; grid[i][j+1] = '|';
                grid[i+1][j-1] = '|'; grid[i+1][j+1] = '|';
                ans++;
            }
            else if (grid[i][j] != '^' && grid[i-1][j] == '|'){
                grid[i+1][j] = '|';
            }
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