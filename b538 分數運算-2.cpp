#include <iostream>
using namespace std;

int gcd(int p, int q)
{
	while (q != 0)
	{
		int temp = p % q;
		p = q;
		q = temp;
	}
	return p;
}

int main()	
{
	int a, b, c, d;
	char ch;
	while (cin >> a >> b >> c >> d >> ch)
	{
		int Num = 0, Den = b * d;			//Numerator ¤À¤l	//Denominator ¤À¥À
		a *= d;
		c *= b;
		switch (ch)
		{
		case '+': Num = a + c; break;
		case '-': Num = a - c; break;
		case '*': Num = a * c; Den = Den * Den; break;
		case '/': Num = a; Den = c; break;
		}

		int neg = 1;
		if (Num < 0) { neg *= -1;	Num *= -1; }
		if (Den < 0) { neg *= -1;	Den *= -1; }

		int x = gcd(Num, Den);
		Num /= x;
		Den /= x;
	
		if (Num == 0) cout << 0;
		else if (Num - Den == 0) cout << 1;
		else
		{
			if (Num%Den == 0)
				cout << neg * Num / Den;
			else
				cout << neg * Num << '/' << Den;
		}

		cout << endl;
	}
	system("pause");
}