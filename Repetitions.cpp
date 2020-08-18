#include <iostream>
#include <vector>
using namespace std;

#define  ll int64_t

int main() {
    char c;
    vector<char> v;
    while (cin >> c) v.push_back(c);
    ll maxim = 1, actual = 1;
    for (int i = 0; i < (int) v.size(); ++i) {
        if (v[i] == v[i - 1]) {
            actual +=2;
            maxim = max(actual,maxim);
        } else actual = 0;
    }
    cout << maxim/2 + 1 << endl;
}
