#include <iostream>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		int number;
		for (int i = 0; i < n; i++) {
			cin >> number;

			if (number == 0) {
				cout << 0 << endl;
				break;
			}

			int sum = 1;
			for (int j = 0; j < 10; j++) {
					sum *= number % 10;
					number /= 10;
					if (number == 0)
						break;
			}
			cout << sum << endl;
		}
	}

	system("pause");
	return 0;
}