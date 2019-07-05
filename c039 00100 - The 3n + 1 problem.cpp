#include <iostream>

using namespace std;
int main() {
	int n1, n2;  

	while (cin >> n1 >> n2)
	{
		cout << n1 << " " << n2 << " ";
		int temp = n1;
		n1 > n2 ? n1 = n2, n2 = temp : n1;
		if (0 < n1&&n1 < 1000000 && 0 < n2&&n2 < 1000000)
		{
			int max = 0;
			for (int i = n1; i <= n2; i++)
			{
				int j = i, count = 1;
				while (j != 1)
				{
					if (j % 2 == 1)
					{
						j = 3 * j + 1;
					}
					else
					{
						j /= 2;
					}
					count++;
				}
				max < count ? max = count : max;
			}
			cout << max << endl;
		}
	}

	system("pause");
	return 0;
}

