#include <iostream>
#include <string>
using namespace std;

string s;

void Arithmetic(int a, char b, int c, int pp);
void turnNum(int i, int L1, int L2);
void parentheses(int p[], int left, int right);
void end();

int main()
{
	while (getline(cin,s))
	{
		int p[100], count = 0, count1 = 1;								
		for (int i = 0; i < s.length(); i ++)				//¥ª¥k¬A©·ªº¦ì¸m
		{
			if (s.at(i) == '(' || s.at(i) == ')')
			{
				p[count] = i;
				count++;
			}
		}

		int x = 0;
		for (int i = 0; i < count; i++)
		{
			if (s.at(p[i]) == '(' && s.at(p[i + 1]) == '(')
				count1++;
		}

		for (int i = 0; i < count1; i++)
		{
			int k = 1;
			for (int j = 0; j < count; j++)
			{
				if (s.at(p[j]) == '('&& s.at(p[j + 1]) != '(' && s.at(p[k]) == ')')
				{
					parentheses(p, j, k);
				}
				k++;

				if (s.at(p[j]) == '(' && s.at(p[j + 1]) != '(')
					j--;
			}
		}

		end();
	}

	system("pause");
	return 0;
}

void parentheses(int p[], int left, int right)
{
	for (int i = p[left] + 4; i < p[right] - 1; i++)
	{
		if (s.at(i) == '*' || s.at(i) == '/' || s.at(i) == '%')
		{
			int L1 = 1, L2 = 1;
			for (int k = 0; k < 1000; k++)
			{
				if (s.at(i - L1) != '!' && s.at(i + L2) != '!' && s.at(i - L1) != ' ' && s.at(i + L2) != ' ')
				{
					turnNum(i, L1, L2);
					break;
				}
				if (s.at(i - L1) < 48 || s.at(i - L1) == '-')
					L1 += 1;
				if (s.at(i + L2) < 48 || s.at(i - L1) == '-')
					L2 += 1;
			}
		}
	}
	for (int i = p[left] + 4; i < p[right] - 1; i++)
	{
		if (s.at(i) == '+' || (s.at(i) == '-' && s.at(i + 1) < 48))
		{
			int L1 = 1, L2 = 1;
			for (int k = 0; k < 1000; k++)
			{
				if (s.at(i - L1) != '!' && s.at(i + L2) != '!' && s.at(i - L1) != ' ' && s.at(i + L2) != ' ')
				{
					turnNum(i, L1, L2);
					break;
				}
				if (s.at(i - L1) < 48 || s.at(i - L1) == '-')
					L1 += 1;
				if (s.at(i + L2) < 48 || s.at(i - L1) == '-') 
					L2 += 1;
			}
		}
	}

	for (int i = p[left]; i <= p[right]; i++)
	{
		if (s.at(i) < 48 && s.at(i) != '-' && s.at(i) != '!')
		{
			s.at(i) = '!';
		}
	}
}

void turnNum(int i, int L1, int L2)
{
	int sum1 = 0, sum2 = 0;
	for (int j = L1; j < 10 + L1; j++)
	{
		if (i - j == 0 || s.at(i - j) == ' ' || s.at(i - j) == '!')
		{
			if (i - j == 0)
				j++;
			int n = j - L1, r = 1;
			for (int k = 0; k < n; k++)
			{
				sum1 += (s.at(i - L1) - '0')*r;
				L1++;
				r *= 10;
				s.at(i - (L1 - 1)) = '!';

				if (i - L1 >= 0 && s.at(i - L1) == '-')
				{
					s.at(i - L1) = '!';
					sum1 *= -1;
					break;
				}
			}
			break;
		}
	}
	for (int j = L2; j < 10 + L2; j++)
	{
		if (i + j == s.length() - 1 || s.at(i + j) == ' ' || s.at(i + j) == '!')
		{
			if (i + j == s.length() - 1)
				j++;
			int n = j - L2, count = j - 1, r = 1;
			for (int k = 0; k < n; k++)
			{
				sum2 += (s.at(i + count) - '0')*r;
				count--;
				r *= 10;
				s.at(i + count + 1) = '!';

				if (s.at(i + count) == '-')
				{
					s.at(i + count) = '!';
					sum2 *= -1;
					break;
				}
			}
			break;
		}
	}
	Arithmetic(sum1, s.at(i), sum2, i);
}

void end()
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) == '*' || s.at(i) == '/' || s.at(i) == '%')
		{
			int L1 = 1, L2 = 1;
			for (int k = 0; k < 1000; k++)
			{
				if (s.at(i - L1) != '!' && s.at(i + L2) != '!' && s.at(i - L1) != ' ' && s.at(i + L2) != ' ')
				{
					turnNum(i, L1, L2);
					break;
				}
				if (s.at(i - L1) < 48 || s.at(i - L1) == '-')
					L1 += 1;
				if (s.at(i + L2) < 48 || s.at(i - L1) == '-')
					L2 += 1;
			}
		}
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) == '+' || (s.at(i) == '-' && s.at(i + 1) < 48))
		{
			int L1 = 1, L2 = 1;
			for (int k = 0; k < 1000; k++)
			{
				if (s.at(i - L1) != '!' && s.at(i + L2) != '!' && s.at(i - L1) != ' ' && s.at(i + L2) != ' ')
				{
					turnNum(i, L1, L2);
					break;
				}
				if (s.at(i - L1) < 48 || s.at(i - L1) == '-')
					L1 += 1;
				if (s.at(i + L2) < 48 || s.at(i - L1) == '-')
					L2 += 1;
			}
		}
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) >= 48 || s.at(i) == '-')
			cout << s.at(i);
	}
	cout << endl;
}

void Arithmetic(int a, char b, int c, int pp)
{
	int sum = 0;

	if (b == '/'&&c == 0)
		sum = 0;
	else
		switch (b)
		{
		case '*': sum = a * c; break;
		case '/': sum = a / c; break;
		case '%': (a % c < 0) ? sum = a % c + c : sum = a % c; break;
		case '+': sum = a + c; break;
		case '-': sum = a - c; break;
		}

	int count = 0, count1 = 2, t = sum, sum1 = sum;
	if (t < 0)
	{
		t *= -1;
	}
	while (t > 0)
	{
		t /= 10;
		count++;
	}

	if (sum == 0)
		count++;

	if (sum < 0 && (pp + 1) + count1 - count <= 0)
		count1++;
		
	for (int i = 0; i < count; i++)
	{
		if (sum > 0)
		{
			s.at(pp + count1) = sum % 10 + '0';
			sum /= 10;
			count1--;
		}
		else
		{
			s.at(pp + count1) = -sum % 10 + '0';
			sum /= 10;
			count1--;
		}
	}
	
	if (s.at(pp) > 33 && s.at(pp) < 48)
		s.at(pp) = '!';
	if (sum1 < 0)
		s.at(pp + count1) = '-';
}

