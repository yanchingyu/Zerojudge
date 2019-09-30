#include <iostream>
using namespace std;

int main()
{
	int a, b;

	while (cin >> a >> b && a != EOF && b != EOF)
	{
		int max = a, min = b;
		if (b > a)
		{
			max = b;
			min = a;
		}
		
		while (max%min != 0)
		{
			int temp = max;
			max = min;
			min = temp % min;
		}
		cout << min << endl;
	}

	system("pause");
	return 0;
}