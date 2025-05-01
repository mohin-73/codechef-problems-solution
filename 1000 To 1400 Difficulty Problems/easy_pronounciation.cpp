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
        int n;
        string s;
        cin >> n >> s;

        int consonant = 0;
        string vowels = "aeiou";

        for (int i = 0; i < n; i += 1) {
            if (vowels.find(s[i]) != string::npos) {
                consonant = 0;
            } else {
                consonant += 1;
            }

            if (consonant == 4) {
                cout << "NO\n";
                goto next;
            }
        }

        cout << "YES\n";
        next:;
    }

    return 0;
}
