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
    vector<string> batteries;
    string battery;
    int ans = 0;
    while(cin>>battery) batteries.emplace_back(battery);
    for (int i = 0; i<batteries.size(); i++){
        int largest_index = 0;
        battery = batteries[i];
        int n = battery.size();
        for (int j=1; j<n; j++){
            if (battery[j] > battery[largest_index]) largest_index = j;
        }
        int other_index;
        if (largest_index==n-1){
            other_index = 0;
            for(int j = 1; j<n-1; j++){
                if (battery[j] > battery[other_index]) other_index = j;
            }
            string out = "";
            out += battery[other_index];
            out += battery[largest_index];
            // cout << out << '\n';
            ans += stoi(out);
        }
        else {
            other_index = largest_index+1;
            for (int j = largest_index+1; j<n; j++){
                if (battery[other_index]<=battery[j]) other_index=j;
            }
            string out = "";
            out += battery[largest_index];
            out += battery[other_index];
            // cout << out << '\n';
            ans += stoi(out);
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