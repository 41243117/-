#include<iostream>
using namespace std;

int main() {
	int n;
	int S;
	cin >> n;
	while (n) {
		cin >> S;
		int* arr = new int[S];
		int* new_arr = new int[S];
		for (int i = 0; i < S; i++) {
			cin >> arr[i];
			new_arr[S - i - 1] = arr[i];
		}
		for (int i = 0; i < S - 1; i++) {
			cout << new_arr[i] << " ";
		}
		cout << new_arr[S - 1] << endl;
		n--;
	}
}