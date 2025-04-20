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
        int n;
        string s;
        cin >> n >> s;

        int consonant_count = 0;
        string vowels = "aeiou";

        for (int i = 0; i < n; i += 1) {
            if (vowels.find(s[i]) != string::npos) {
                consonant_count = 0;
            } else {
                consonant_count += 1;
            }

            if (consonant_count == 4) {
                cout << "NO\n";
                goto next_test_case;
            }
        }

        cout << "YES\n";
        next_test_case:;
    }

    return 0;
}
