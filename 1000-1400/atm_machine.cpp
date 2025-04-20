#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k;
        
        string s = "";
        
        for (int i = 0; i < n; i += 1) {
            cin >> x;
            if (x <= k) {
                s += '1';
                k = k - x;
            } else {
                s += '0';
            }
        }
        
        cout << s << '\n';
    }

    return 0;
}
