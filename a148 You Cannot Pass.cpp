#include <iostream>
using namespace std;

int main()
{
	int n;

	while (cin >> n)
	{
		double sum = 0, sub;

		for (int i = 0; i < n; i++)
		{
			cin >> sub;
			sum += sub;
		}

		if (sum / n > 59)			//大於59沒被當
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}


	system("pause");
	return 0;
}