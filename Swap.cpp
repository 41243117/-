#include<iostream>
using namespace std;

void swap(int* a, int* b) {
	int *temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int n, m;
	cin >> n >> m;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
	int site1, site2;
	for (int i = 0; i < m; i++) {
		cin >> site1 >> site2;
		swap(arr[site1], arr[site2]);
	}
	for (int i = 0; i < n; i++)cout << arr[i] << " ";
	cout << '\n';

	return 0;
}