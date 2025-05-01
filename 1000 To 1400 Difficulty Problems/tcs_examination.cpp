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
        int a, b, c;
        cin >> a >> b >> c;
        int x, y, z;
        cin >> x >> y >> z;
        
        int t1 = a + b + c;
        int t2 = x + y + z;
        
        if (t1 > t2 or (t1 == t2 and a > x)) {
            cout << "DRAGON\n";
        } else if (t1 == t2 and a == x and b > y) {
            cout << "DRAGON\n";
        } else if (t1 == t2 and a == x and b == y and c > z) {
            cout << "DRAGON\n";
        } else if (a == x and b == y and c == z) {
            cout << "TIE\n";
        } else {
            cout << "SLOTH\n"; 
        }
    }

    return 0;
}
