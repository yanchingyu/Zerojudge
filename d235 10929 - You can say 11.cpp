#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;

	while (cin >> n)
	{
		int odd = 0, even = 0;
		
		if ((n.at(0) - '0') == 0)
			return 0;
		else if (n.length() % 2 == 0)
		{
			for (int i = 0, j = 1; i < n.length(), j < n.length(); i += 2, j += 2)
			{
				odd += (n.at(j) - '0');
				even += (n.at(i) - '0');
			}
		}
		else
		{
			for (int i = 0; i < n.length(); i += 2)
			{
				odd += (n.at(i) - '0');
			}
			for (int j = 1; j < n.length(); j += 2)
			{
			 	even += (n.at(j) - '0');
			}
		}

		if ((odd - even) % 11 == 0)
			cout << n << " is a multiple of 11." << endl;
		else
			cout << n << " is not a multiple of 11." << endl;
	}

	system("pause");
	return 0;
}
