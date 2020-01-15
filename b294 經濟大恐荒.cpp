#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			int m;
			cin >> m;
			sum += m * i;
		}
		cout << sum << endl;
	}
	system("pause");
}