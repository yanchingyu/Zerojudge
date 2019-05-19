#include <iostream>
using namespace std;

void swap_digit(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] % 10 > arr[j + 1] % 10) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void swap(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] % 10 == arr[j + 1] % 10) {
				if (arr[j] < arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}

int main() {
	int n, *arr;

	while (cin >> n) {
		int number;
		arr = new int[n];

		for (int i = 0; i < n; i++) {
			cin >> number;
			arr[i] = number;
		}
		swap_digit(arr, n);
		swap(arr, n);

		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}