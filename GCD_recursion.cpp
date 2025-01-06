#include<iostream>
using namespace std;

int GCD(int n, int m) {
    while (!m)
        return n;
    return GCD(m, n % m);
}

int main() {
    int n, m;
    while (cin >> n >> m)
        cout << GCD(n, m) << endl;
    return 0;
}