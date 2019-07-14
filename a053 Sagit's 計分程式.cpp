#include <iostream>
using namespace std;

int main()
{
	int n;

	while (cin >> n)
	{
		int sum = 0;

		if (0 <= n && n <= 10)
		{
			sum = n * 6;
		}
		else if (11 <= n && n <= 20)
		{
			sum = 10 * 6 + (n - 10) * 2;
		}
		else if (21 <= n && n <= 40)
		{
			sum = 10 * 6 + 10 * 2 + (n - 20) * 1;
		}
		else if (n >= 40)
		{
			sum = 100;
		}
		else
		{
			cout << "ERROR!" << endl;
			continue;
		}
		cout << sum << endl;
	}

	system("pause");
	return 0;
}