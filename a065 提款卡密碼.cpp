#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	while (cin >> s)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << abs(s.at(i) - s.at(i+1));
		}
		cout << endl;
	}

	system("pause");
	return 0;
}