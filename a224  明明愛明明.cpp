#include <iostream>
#include <string>
using namespace std;

void inspect(string &huiwen, int arr[]) {
	
	for (int i = 0; i < huiwen.size(); i++) {
		if (int(huiwen.at(i)) >= 65 && int(huiwen.at(i)) <= 90  ){
			arr[int(huiwen.at(i)) - 65]++;
		}
		else if (huiwen.at(i) >= 97 && int(huiwen.at(i)) <= 122) {
			arr[int(huiwen.at(i)) - 97]++;
		}
	}
}

int main() {
	string huiwen;

	while (cin >> huiwen) {
		int arr[26] = { 0 }, count = 0;

		if (huiwen.size() > 1000)
			break;
		else {
			inspect(huiwen, arr);

			for (int i = 0; i < 26; i++) {
				if (arr[i] % 2 != 0) {
					count++;
				}
			}
			if (count > 1)
				cout << "no..." << endl;
			else
				cout << "yes !" << endl;
		}
	}

	system("pause");
	return 0;
}