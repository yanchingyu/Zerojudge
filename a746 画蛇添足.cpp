#include <iostream>
using namespace std;

void Swap(int &t1, int &t2)
{
	int temp = t1;
	t1 = t2;
	t2 = temp;
}

int main()
{
	int n, m;

	while (cin >> n >> m)
	{
		if (n == EOF)
			return 0;
		if (1 <= n && m <= 500)
		{
			/*動態配置二維陣列*/
			char **arr = new char*[n+2];
			for (int i = 0; i < n + 2; i++)
				arr[i] = new char[n + 2];
			/*輸入需要圍起來的邊長*/
			int *p = new int[m], *q = new int[m];
			for (int i = 0; i < m; i++)
			{
				cin >> p[i] >> q[i];
			}
			/*設立農地範圍*/
			for (int i = 0; i < m - 1; i++)
			{
				if (p[i] > p[i + 1])
					Swap(p[i], p[i + 1]);
				if (q[i] > q[i + 1])
					Swap(q[i], q[i + 1]);
				if (p[i] == p[i + 1])
				{
					for (int j = q[i]; j <= q[i + 1]; j++)
						arr[p[i]][j] = '*';
				}
				if (q[i] == q[i + 1])
				{
					for (int j = p[i]; j <= p[i + 1]; j++)
						arr[j][q[i]] = '*';
				}
				if (i % 5 == 2)
					Swap(q[i], q[i + 1]);
				if (i % 5 == 4)
					i++;
			}
			/*將牆圍起來以及不是牆的都加空格*/	/*輸出土地*/
			for (int i = 0; i < n + 2; i++)
			{
				for (int j = 0; j < n + 2; j++)
				{
					if (i == n + 1 || i == 0)
						arr[i][j] = '-';
					else if (j == n + 1 || j == 0)
						arr[i][j] = '|';
					else if(arr[i][j] != '*')
						arr[i][j] = ' ';
					
						cout << arr[i][j];
				}
				cout << endl;
			}		
		}
	}
	system("pause");
}