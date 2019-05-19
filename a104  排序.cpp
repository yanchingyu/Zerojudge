#include <iostream>
using namespace std;

void sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int n, *arr;

	while (cin >> n) {
		arr = new int[n];
		if (n == EOF)
			break;

		for (int i = 0; i < n; i++) 
			cin >> arr[i];
		
		sort(arr, n);

		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}