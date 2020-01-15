#include <iostream>
using namespace std;

int main()
{
	int T;
	while (cin >> T)
	{
		while (T--)
		{
			int N, M;
			cin >> N >> M;
			/*配置動態二維陣列*/
			int **arr = new int*[N];
			for (int i = 0; i < N; i++)
				arr[i] = new int[M];
			/*輸入到動態二維陣列*/
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					int t;
					cin >> t;
					arr[i][j] = t;
				}
			}
			
			int count = 0;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					if (arr[i][j] == arr[N - (i + 1)][M - (j + 1)])
					{
						count++;
					}
				}
			}
			if (count == N * M)
				cout << "go forward" << endl;
			else
				cout << "keep defending" << endl;
		}
	}
	system("pause");
}