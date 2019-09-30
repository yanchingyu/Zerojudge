#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int T;
	while (cin >> T)													//測資數量
	{
		for (int e = 0; e < T; e++)
		{
			int N, M;

			cin >> N >> M;												//N為大小 , M為怎麼繞 1順時鐘  2逆時鐘

			vector<vector<int>> a(N, vector<int>(N));					//創造二維 N*N 陣列

			a[0][0] = 1;
			if (N == 1)
			{
				cout << a[0][0] << "\n\n";
				continue;
			}

			int i = 0, j = 0, k = 2, count = 0;
			for (int p = 1; p <= 2 * N - 1; p++)			
			{
				if (p >= 4 && p % 2 == 0)
					count++;
				for (int q = 1; q <= N - 1 - count; q++)
				{
					if (p % 4 == 1)
					{	
						j++;
						a[i][j] = k;
					}
					if (p % 4 == 2)
					{
							i++;
						a[i][j] = k;
					}
					if (p % 4 == 3)
					{
							j--;
						a[i][j] = k;

					}
					if (p % 4 == 0)
					{
							i--;
						a[i][j] = k;
					}
					k++;
				}
			}

			for (int p = 0; p < N; p++)
			{
				for (int q = 0; q < N; q++)
				{
					if(M==1)
						cout << setw(5) << a[p][q];
					else
						cout << setw(5) << a[q][p];
				}
				cout << endl;
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;
}
