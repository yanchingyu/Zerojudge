#include <iostream>
using namespace std;

int total(int y, int m, int d)
{
	int sum = 0;
	for (int i = 1; i < y; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0 && i % 3200 != 0))		
			sum += 366;
		else
			sum += 365;
	}

	for (int i = 1; i < m; i++)
	{
		if ((i % 2 == 1 && i < 7) || (i % 2 == 0 && i > 8) || i == 7 || i == 8)
		{
			sum += 31;
		}
		else
		{
			if (i == 2 && ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 3200 != 0)))
				sum += 29;
			else if (i == 2)
				sum += 28;
			else
				sum += 30;
		}
	}
	sum += d;

	return sum;
}

int main()
{
	int y1, m1, d1, y2, m2, d2;

	while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2)
	{
		int sum1 = 0, sum2 = 0;

		sum1 += total(y1, m1, d1);
		sum2 += total(y2, m2, d2);
		
		cout << abs(sum2 - sum1) << endl;
	}

	system("pause");
	return 0;
}