#include <iostream>
#include <string>
using namespace std;

void Add(string &s1, string &s2);
void Subtraction(string &s1, string &s2);
void Multiplication(string &s1, string &s2);
void Divide(string &s1, string &s2);

int main()
{
	string s1, s2;
	char op;

	while (cin >> s1 >> op >> s2)
	{
		if (op == '+')
			Add(s1, s2);
		if (op == '-')
			Subtraction(s1, s2);
		if (op == '*')
			Multiplication(s1, s2);
		if (op == '/')
			Divide(s1, s2);

		cout << endl;
	}

	system("pause");
	return 0;
}

void Add(string &s1, string &s2)
{
	int p1 = s1.length(), p2 = s2.length(), count = 0, carry = 0;
	int n[500] = {0};

	while (p1 != 0 || p2 != 0)
	{
		if (p1 != 0 && p2 != 0)
		{
			if ((s1.at(p1 - 1) - '0') + (s2.at(p2 - 1) - '0') + carry >= 10)
			{
				n[count] = ((s1.at(p1 - 1) - '0') + (s2.at(p2 - 1) - '0') + carry) % 10;
				carry = ((s1.at(p1 - 1) - '0') + (s2.at(p2 - 1) - '0') + carry) / 10;
			}
			else
			{
				n[count] = ((s1.at(p1 - 1) - '0') + (s2.at(p2 - 1) - '0') + carry) % 10;
				carry = 0;
			}
		}
		else if (p1 != 0)
		{
			n[count] = ((s1.at(p1 - 1) - '0') + carry) % 10;
			carry = (s1.at(p1 - 1) - '0' + carry) / 10;
		}
		else if (p2 != 0)
		{
			n[count] = ((s2.at(p2 - 1) - '0') + carry) % 10;
			carry = (s2.at(p2 - 1) - '0' + carry) / 10;
		}

		if (p1 != 0)
			p1--;
		if (p2 != 0)
			p2--;
		count++;
	}
	if (carry != 0)
		cout << carry;

	for (int i = count - 1; i >= 0; i--)
	{
		cout << n[i];
	}
}

void Subtraction(string &s1, string &s2)
{
	int p1 = s1.length(), p2 = s2.length(), count = 0, x = 0, q = 0;			// x為小數-大數 ,  q為s1 >= s2
	int n[500] = {0};

	if (p1 > p2)
	{		
		q = 1;
	}
	if (p1 == p2)
	{
		for (int i = 0, j = 0, k = 0; i < p1, j < p2; i++, j++)
		{
			if (s1.at(i) == s2.at(j))													//當兩數一樣
			{
				k++;
				if (k == p1)
				{
					cout << 0;
					return;
				}
			}
			if (s1.at(i) < s2.at(j))
				break;
			if (s1.at(i) > s2.at(j))
			{
				q = 1;
				break;
			}
		}
	}

	while (p1 != 0 || p2 != 0)
	{ 
		if (p1 != 0 && p2 != 0)
			if (q)
			{
				if (s1.at(p1 - 1) >= s2.at(p2 - 1))
					n[count] = (s1.at(p1 - 1) - '0') - (s2.at(p2 - 1) - '0');
				else
				{
					int i = 2;
					while (s1.at(p1 - i) == '0')
					{
						s1.at(p1 - i) = '9';
						i++;
					}
					n[count] = (s1.at(p1 - 1) - '0') + 10 - (s2.at(p2 - 1) - '0');
					s1.at(p1 - i) -= 1;
				}
			}
			else
			{
				if (s2.at(p2 - 1) >= s1.at(p1 - 1))
					n[count] = (s2.at(p2 - 1) - '0') - (s1.at(p1 - 1) - '0'); 
				else
				{
					int i = 2;
					while (s2.at(p2 - i) == '0')
					{
						s2.at(p2 - i) = '9';
						i++;
					}
					n[count] = (s2.at(p2 - 1) - '0') + 10 - (s1.at(p1 - 1) - '0');
					s2.at(p2 - i) -= 1;
				}
				x = 1;
			}
		else if (p1 != 0)
		{
				n[count] = s1.at(p1 - 1) - '0';
		}
		else if (p2 != 0)
		{
				n[count] = s2.at(p2 - 1) - '0';
		}


		if (p1 != 0)
			p1--;
		if (p2 != 0)
			p2--;
		count++;
	}
	if (x == 1)
		cout << "-";

	int k = 0;
	for (int i = count - 1; i >= 0; i--)
	{
		if (n[i] == 0)
		{
			k++;
			continue;
		}
		break;
	}

	for (int i = count - 1 - k; i >= 0; i--)
	{
		cout << n[i];
	}
	if (k == count)
		cout << 0;
}

void Multiplication(string &s1, string &s2)
{
	int p1 = s1.length(), p2 = s2.length(), count = 0, x = 0;
	int n[500] = { 0 };

	for (int i = p1 - 1; i >= 0; i--)
	{
		for (int j = p2 - 1; j >= 0; j--)
		{
			n[count] = n[count] + (s1.at(i) - '0') * (s2.at(j) - '0') % 10;
			if (n[count] >= 10)
			{
				n[count + 1] += n[count] / 10;
				n[count] %= 10;	
			}
			if ((s1.at(i) - '0') * (s2.at(j) - '0') >= 10)
				n[count + 1] = n[count + 1] + (s1.at(i) - '0') * (s2.at(j) - '0') / 10;

			count++;
		}
		if (i == 0)
			break;
		x++;
		count = x;
	}

	int k = count + 5;
	while (n[k] == 0)
	{
		k--;
	}

	for (int i = k; i >= 0; i--)
	{
		cout << n[i];
	}
}

void Divide(string &s1, string &s2)
{
	int p1 = s1.length(), p2 = s2.length(), nn = p1 - p2, p = s1.length(), q = 1;
	int n[500] = { 0 };

	if (p1 < p2)
	{
		cout << 0;
		return;
	}
	if (p1 == p2)
	{
		for (int i = 0, j = 0, k = 0; i < p1, j < p2; i++, j++)
		{
			if (s1.at(i) == s2.at(j))													//當兩數一樣
			{
				k++;
				if (k == p1)
				{
					cout << 1;
					return;
				}
			}
			if (s1.at(i) > s2.at(j))
				break;
			if (s1.at(i) < s2.at(j))
			{
				cout << 0;
				return;
			}
		}
	}

	s2.append(nn, '0');
	p2 += nn;
	while (q)
	{
		if (p < p2)
			break;
		if (p == p2)
		{
			for (int i = 0, j = 0, k = 0; i < p1, j < p2; i++, j++)
			{
				if (s1.at(s1.length() - p + i) == s2.at(j))													//當兩數一樣
				{
					k++;
					if (k == p)
					{
						n[nn] += 1;
						q = 0;
					}
				}
				if ((s1.at(s1.length() - p + i) < s2.at(j) && p == p1) || (s1.at(s1.length() - p + i) < s2.at(j) && nn > 0))
				{
					nn--;
					p2--;
					s2.erase(s2.length() - 1, 1);
					break;
				}
				if (s1.at(s1.length() - p + i) > s2.at(j))
					break;
				if (s1.at(s1.length() - p + i) < s2.at(j)) 
				{
					q = 0;
					break;
				}
			}
		}

		if (q)
		{
			while (p1 != s1.length() - p || p2 != 0)
			{
				if (p1 != s1.length() - p && p2 != 0)
				{
					if (s1.at(p1 - 1) >= s2.at(p2 - 1))
						s1.at(p1 - 1) = s1.at(p1 - 1) - (s2.at(p2 - 1) - '0');
					else
					{
						int i = 2;
						while (s1.at(p1 - i) == '0')
						{
							s1.at(p1 - i) = '9';
							i++;
						}
						s1.at(p1 - 1) = s1.at(p1 - 1) + 10 - (s2.at(p2 - 1) - '0');
						s1.at(p1 - i) -= 1;
					}
				}

				if (p1 != s1.length() - p)
					p1--;
				if (p2 != 0)
					p2--;
			}

			int x = 0;
			p = 0;
			for (int i = 0; i < s1.length(); i++)
			{
				if (s1.at(i) != '0')
					x = 1;
				if (x == 1)
					p++;
			}

			p1 = s1.length();
			p2 = s2.length();
			if (nn >= 0)
			{
				n[nn] += 1;
			}

			if (p < p2 && nn > 0)
			{
				nn -= (p2 - p);
				s2.erase(s2.length() - (p2 - p), (p2 - p));
				p2 -= (p2 - p);
			}
		}
	} 

	int x = 0;
	for (int i = s1.length(); i >= 0; i--)
	{
		if (n[i] != 0)
			x = 1;
		if (x == 1)
			cout << n[i];
	}
}