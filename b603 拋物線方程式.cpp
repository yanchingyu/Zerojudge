#include <iostream>
#include <cmath>
using namespace std;

int Min(int a, int b, int c, int d)
{
	int min = a;

	if (min > abs(b))
		min = b;
	if (min > abs(c))
		min = c;
	if (min > abs(d))
		min = d;
	return min;
}
int main()
{
	int x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2)
	{
		int a1 = y2 - y1,
			a = pow((x2 - x1), 2),
			b = a1,
			c = a1 * (-2 * x1),
			d = a1 * pow(x1, 2) + y1 * pow((x2 - x1), 2),
			count = 2,
			min = Min(a, b, c, d);

		while (min != 1)
		{
			if (a%count == 0 && b % count == 0 && c % count == 0 && d % count == 0)
			{
				a /= count; b /= count; c /= count; d /= count;
				count--;
			}
			if (count == min)
				break;
			count++;
		}
		cout << a << "y = " << b << "x^2 + " << c << "x + " << d << endl;
	}
	system("pause");
}