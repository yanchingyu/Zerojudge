#include <iostream>
using namespace std;

int main()
{
	int N;
	while (cin >> N)
	{
		if (1 <= N && N <= 30000)
		{
			int num[30001] = { 0 };

			for (int i = 0; i < N; i++)
			{
				int n;
				cin >> n;
				num[n]++;
			}
			int max = 0;
			for (int i = 1; i < 30001; i++)
				if (max < num[i])
					max = num[i];

			for (int i = 1; i < 30001; i++)
			{
				if (max == num[i])
					cout << i << " " << max << endl;
			}
		}
	}

	system("pause");
}