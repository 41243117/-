#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int* arr = new int[n];
		int* new_arr = new int[n];
		for (int i = 0; i < n ; i++) {
			cin >> arr[i];
			new_arr[i] = arr[i];
		}
		for (int i = 0; i < n - 1; i++) {
			cout << new_arr[i] << " ";
		}
		cout << new_arr[n - 1] << endl;
	}
}