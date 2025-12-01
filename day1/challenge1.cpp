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
    vector<string> instructions;
    int dial = 50;
    int pass = 0;
    // cin >> instructions[i];
    string instruct;
    while (cin >> instruct) instructions.emplace_back(instruct);
    for (int i = 0; i<instructions.size(); i++){
        if (instructions[i][0] == 'R'){
            int hmm = stoi(instructions[i].substr(1, instructions[i].size() - 1));
            dial += hmm;
            while (dial>99) {dial -= 100;} // 0 after 99 (100 ---> 0)
        }
        if (instructions[i][0] == 'L'){
            int hmm = stoi(instructions[i].substr(1, instructions[i].size() - 1));
            dial -= hmm;
            while (dial<0) {dial += 100;} // 99 before 0 (-1 ---> 99)
        }
        if (dial==0) pass++;
    }
    cout << pass << '\n';
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