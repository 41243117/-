#include<iostream>
using namespace std;

int N(int n) {
	if (n == 1)return 1;
	return n + N(n - 1);
}

int main() {
	int n;
	while (cin >> n) {
		if (!n)break;
		cout << N(n) << endl;
	}
}