#include <iostream>
using namespace std;

#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;
        ll z = max(y, x);
        ll z2 = (z - 1) * (z - 1), tot;
        if (z % 2) {
            if (y == z) {
                tot = z2 + x;
            } else {
                tot = z2 + 2 * z - y;
            }
        } else {
            if (x == z) {
                tot = z2 + y;
            } else {
                tot = z2 + 2 * z - x;
            }
        }
        cout << tot << endl;
    }
}