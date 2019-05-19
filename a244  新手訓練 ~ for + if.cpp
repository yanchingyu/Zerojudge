#include <iostream>
using namespace std;

int main() {
	int n, a;
	long int b, c;

	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;

			if (a == 1)
				cout << b + c << endl;
			else if (a == 2)
				cout << b - c << endl;
			else if (a == 3)
				cout << b * c << endl;
			else if (a == 4)
				cout << b / c << endl;
			else
				cout << "please try again!" << endl;
		}
	}

	system("pause");
	return 0;
}