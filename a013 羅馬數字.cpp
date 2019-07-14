#include <iostream>
#include <string>
using namespace std;

#define size 7
char roman[size] = { 'I','V','X','L','C','D','M' };
int num[size] = { 1,5,10,50,100,500,1000 };

int RomanNum_Turn_Num(string &s);

int main()
{
	string s1, s2;

	while (cin >> s1)
	{
		if (s1.at(0) == '#')
			return 0;

		cin >> s2;
		int sum1 = RomanNum_Turn_Num(s1);
		int sum2 = RomanNum_Turn_Num(s2);

		int sum = abs(sum1 - sum2);
		int thousand = sum / 1000, hundred = sum / 100 % 10, ten = sum / 10 % 10, one = sum % 10;

		if (sum == 0)
		{
			cout << "ZERO";
		}

		if (thousand != 0)
		{
			for (int i = 0; i < thousand; i++)
			{
				cout << "M";
			}
		}

		if (hundred != 0&& hundred>=5)
		{
			if (hundred == 9)
				cout << "CM";
			else
			{
				cout << "D";
				for (int i = 0; i < hundred - 5; i++)
				{
					cout << "C";
				}
			}
		}
		if(hundred != 0 && hundred == 4)
		{
				cout << "CD";
		}
		if (hundred != 0 && hundred < 4)
		{
			for (int i = 0; i < hundred; i++)
			{
				cout << "C";
			}
		}

		if (ten != 0 && ten >= 5)
		{
			if (ten == 9)
				cout << "XC";
			else
			{
				cout << "L";
				for (int i = 0; i < ten - 5; i++)
				{
					cout << "X";
				}
			}
		}
		if (ten != 0 && ten == 4)
		{
			cout << "XL";
		}
		if (ten != 0 && ten < 4)
		{
			for (int i = 0; i < ten; i++)
			{
				cout << "X";
			}
		}

		if (one != 0 && one >= 5)
		{
			if (one == 9)
				cout << "IX";
			else
			{
				cout << "V";
				for (int i = 0; i < one - 5; i++)
				{
					cout << "I";
				}
			}
		}
		if (one != 0 && one == 4)
		{
			cout << "IV";
		}
		if (one != 0 && one < 4)
		{
			for (int i = 0; i < one; i++)
			{
				cout << "I";
			}
		}

		cout << endl;
	}

	system("pause");
	return 0;
}

int RomanNum_Turn_Num(string &s)
{
	int total = 0;
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (s.at(i) == roman[j] && i != s.length() - 1 && j < 5)
			{
				if (s.at(i + 1) == roman[j + 2])
				{
					total += num[j + 2] - num[j];
					i++;
					break;
				}
				if (s.at(i + 1) == roman[j + 1])
				{
					total += num[j + 1] - num[j];
					i++;
					break;
				}
			}
			if (s.at(i) == roman[j])
			{
				total += num[j];
				break;
			}
		}
	}
	return total;
}