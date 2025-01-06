#include<iostream>
using namespace std;

int Ackermann(int m, int n) {
	if (m == 0)return n + 1;
	else if (m > 0 && n == 0)return Ackermann(m - 1, 1);
	else if (m > 0 && n > 0)return Ackermann(m - 1, Ackermann(m, n - 1));
	else return -1;
}

int main() {
	int m, n;
	while (cin >> m >> n) {
		if (Ackermann(m, n) == -1) {
			cout << "error" << endl;
			continue;
		}
		cout << Ackermann(m, n) << endl;;
	}
	return 0;
}