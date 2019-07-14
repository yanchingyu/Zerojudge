#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	string s;
	char IDalphabet[26][3] = { {'A','1','0'},{'B','1','1'},
								{'C','1','2'},{'D','1','3'},
								{'E','1','4'},{'F','1','5'},
								{'G','1','6'},{'H','1','7'},
								{'I','3','4'},{'J','1','8'},
								{'K','1','9'},{'L','2','0'},
								{'M','2','1'},{'N','2','2'},
								{'O','3','5'},{'P','2','3'},
								{'Q','2','4'},{'R','2','5'},
								{'S','2','6'},{'T','2','7'},
								{'U','2','8'},{'V','2','9'},
								{'W','3','2'},{'X','3','0'},
								{'Y','3','1'},{'Z','3','3'} };

	while (cin >> s)
	{
		int sum = 0, c = s.at(8) - '0';

		for (int i = 0, j = 8; i < s.length() - 1; i++, j--)
		{
			sum += (s.at(i) - '0')*j;
		}

		for (int i = 0; i < 26; i++)
		{
			if ((10 - ((sum + ((IDalphabet[i][1] - '0') * 1 + (IDalphabet[i][2] - '0') * 9)) % 10)) % 10 == c)
			{
				cout << IDalphabet[i][0];
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}