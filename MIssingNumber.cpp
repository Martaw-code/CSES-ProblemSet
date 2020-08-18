#include <iostream>
#include <vector>
using namespace std;

#define  ll int64_t

int main() {
    ll n;
    cin >> n;
    ll max = n*(n+1)/2;
    ll seq;
    while (cin >> seq) {
        max -= seq;
    }
    cout << max << endl;
}