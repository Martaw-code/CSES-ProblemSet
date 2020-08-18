#include <iostream>
using namespace std;

#define ll int64_t

int main() {
    ll n; cin >> n;
    int maxim = 0;
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        maxim = max(maxim,x);
        total += maxim-x;
    }
    cout << total << endl;
}