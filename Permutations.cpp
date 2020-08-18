#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if (n == 1) cout << 1 << endl;
    else if (n == 3 or n == 2) cout << "NO SOLUTION" << endl;
    else {
        //separem per casos si es tracta de parell o senar per 1 3 5 2 4
        //sempre ens assegurem com a mímim 2 de diff
        if(n%2 == 0) {
            for (int i = 2; i <= n; i+=2) cout << i << ' ';
            for (int i = 1; i <= n; i+=2) cout << i << ' ';
        }
        else {
            for (int i = n-1; i > 0; i-=2) cout << i << ' ';
            for (int i = n; i > 0; i-=2) cout << i << ' ';
        }
    }
}