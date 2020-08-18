#include <iostream>
using namespace std;

#define ll int64_t

void solve(ll n) {
    cout << n;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            cout << ' ' << n;
        } else {
            n *= 3;
            ++n;
            cout << ' ' << n;
        }
    }
    cout << endl;
}


int main() {
    ll n;
    cin >> n;
    solve(n);
}
