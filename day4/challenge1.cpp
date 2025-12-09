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
    string row;
    while (cin >> row) grid.emplace_back(row);
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if(grid[i][j]=='@'){
                int count = 0;
                if ((i==0 && j==0) || (i==n-1 && j==m-1) || (i==n-1 && j==0) || (i==0 && j==m-1)){
                    ans++; continue;
                }
                else if (i==0){
                    if (grid[i][j+1] == '@') count++;
                    if (grid[i][j-1] == '@') count++;
                    if (grid[i+1][j-1] == '@') count++;
                    if (grid[i+1][j+1] == '@') count++;
                    if (grid[i+1][j] == '@') count++;  
                    if (count<4) {ans++;continue;}
                }
                else if (i==n-1){
                    if (grid[i][j+1] == '@') count++;
                    if (grid[i][j-1] == '@') count++;
                    if (grid[i-1][j-1] == '@') count++;
                    if (grid[i-1][j+1] == '@') count++;
                    if (grid[i-1][j] == '@') count++;  
                    if (count<4) {ans++;continue;}
                }
                else if (j==0){
                    if (grid[i+1][j] == '@') count++;
                    if (grid[i-1][j] == '@') count++;
                    if (grid[i+1][j+1] == '@') count++;
                    if (grid[i-1][j+1] == '@') count++;
                    if (grid[i][j+1] == '@') count++;
                    if (count<4) {ans++;continue;}
                }
                else if (j==m-1){
                    if (grid[i+1][j] == '@') count++;
                    if (grid[i-1][j] == '@') count++;
                    if (grid[i+1][j-1] == '@') count++;
                    if (grid[i-1][j-1] == '@') count++;
                    if (grid[i][j-1] == '@') count++;
                    if (count<4) {ans++;continue;}
                }
                else {
                    if (grid[i][j+1] == '@') count++;
                    if (grid[i][j-1] == '@') count++;
                    if (grid[i+1][j-1] == '@') count++;
                    if (grid[i+1][j+1] == '@') count++;
                    if (grid[i+1][j] == '@') count++;  
                    if (grid[i-1][j-1] == '@') count++;
                    if (grid[i-1][j+1] == '@') count++;
                    if (grid[i-1][j] == '@') count++;  
                    if (count<4) {ans++;continue;}
                }
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