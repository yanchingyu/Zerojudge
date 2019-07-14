#include <iostream>
#include <string>
using namespace std;

int main() {
	string en, *de;					//encryption ¥[±K   decrypt ¸Ñ±K

	while (cin >> en)
	{
		de = new string[en.length()];

		for (int i = 0; i < en.length(); i++)
		{
			de[i] = char(en.at(i) - NULL - 7);
			cout << de[i];
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}