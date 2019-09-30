#include <iostream>
#include <string>
using namespace std;

void change(string s[], int j);

int main()
{
	int N;															// 大數排序

	while (cin >> N)											//N為輸入有幾筆
	{
		string *s;
		s = new string[N];

		for (int i = 0; i < N; i++)
		{
			cin >> s[i];
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N - 1; j++)
			{
				if (s[j].at(0) == '-' && s[j + 1].at(0) == '-')
				{
					if (s[j].length() < s[j + 1].length())
					{
						change(s, j);
					}
					if (s[j].length() == s[j + 1].length())
					{
						for (int k = 1; k < s[j].length(); k++)
						{
							if (s[j].at(k) < s[j + 1].at(k))
							{
								change(s, j);
							}
						}
					}
				}
				else if (s[j].at(0) == '-' && s[j + 1].at(0) != '-');
				else if (s[j].at(0) != '-' && s[j + 1].at(0) == '-')
				{
					change(s, j);
				}
				else
				{
					if (s[j].length() > s[j + 1].length())
					{
						change(s, j);
					}
					if (s[j].length() == s[j + 1].length())
					{
						for (int k = 0; k < s[j].length(); k++)
						{
							if (s[j].at(k) > s[j + 1].at(k))
							{
								change(s, j);
							}
						}
					}
				}
			}
		}

		for (int i = 0; i < N; i++)
		{
			cout << s[i] << endl;
		}

	}
	system("pause");
	return 0;
}

void change(string s[], int j)
{
	string temp = s[j];
	s[j] = s[j + 1];
	s[j + 1] = temp;
}