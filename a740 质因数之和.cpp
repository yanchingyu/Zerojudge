#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;

	while (cin >> x)
	{
		if (x != EOF)
		{
			int sum = 0;
			while (x % 2 == 0)
			{
				sum += 2;
				x /= 2;
			}
			for (int i = 3; i <= sqrt(2000000000); i+=2)
			{
				if (x%i == 0)
				{
					sum += i;
					x /= i;
					i -= 2;
				}
				if (x < i)
					break;
			}
			if (sum == 0)
				cout << x << endl;
			else
				cout << sum << endl;
		}
	}

	system("pause");
}