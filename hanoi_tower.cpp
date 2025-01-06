#include<iostream>
using namespace std;

int step = 0;

void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		cout << A << " to " << C << endl;
		step++;
	}
	else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, C, B);
		hanoi(n - 1, B, A, C);
	}
}

int main() {
	int n;
	while (cin >> n) {
		hanoi(n, 'A', 'B', 'C');
		cout << step << endl;
	}
	return 0;
}