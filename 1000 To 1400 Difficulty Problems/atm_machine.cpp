#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;

    while (tc--) {
        int n, balance;
        cin >> n >> balance;

        string result;
        for (int i = 0; i < n; ++i) {
            int amount;
            cin >> amount;

            if (amount <= balance) {
                result += '1';
                balance -= amount;
            } else {
                result += '0';
            }
        }

        cout << result << '\n';
    }

    return 0;
}
