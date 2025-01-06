#include<iostream>
using namespace std;

int BinarySearch(int* arr, int target, const int n)
{
	int Left = 0;
	int Right = n - 1;
	while (Left <= Right)
	{
		int middle = (Left + Right) / 2;
		if (target < arr[middle])Right = middle - 1;
		else if (target > arr[middle])Left = middle + 1;
		else return middle + 1;
	}
	return -1;
}

int main() {
	int L, S;
	while (cin >> L >> S)
	{
		if (L == 0 && S == 0)break;
		int* arr = new int[L];
		for (int i = 0; i < L; i++)
		{
			cin >> arr[i];
		}
		cout << BinarySearch(arr, S, L) << endl;
	}
	return 0;
}
