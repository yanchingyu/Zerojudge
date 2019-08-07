#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, c, d, e, f;

	while (cin >> a >> b >> c >> d >> e >> f)
	{
		float x = 0, y = 0;

		if (a*e == b*d)				//無限多組解
		{
			if (b*f == c * e)
				cout << "Too many" << endl;
			else
				cout << "No answer" << endl;
		}
		else
		{
			int sum[6] = { a*d,b*d,c*d,d*a,e*a,f*a };

			if (sum[0] == sum[3])
			{
				y = (sum[2] - sum[5])*1.0 / (sum[1] - sum[4]);
				if (a > 0)
					x = (c - (b*y))*1.0 / a;
				else
					x = (f - (e*y))*1.0 / d;
			}
			else
			{
				y = (sum[2] + sum[5])*1.0 / (sum[1] + sum[4]);
				if (a > 0)
					x = (c - (b*y))*1.0 / a;
				else
					x = (f - (e*y))*1.0 / d;
			}
			cout << fixed << setprecision(2);
			cout << "x=" << x << endl;
			cout << "y=" << y << endl;
		}
	}

	system("pause");
	return 0;
}