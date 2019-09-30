#include <stdio.h>

int main()
{
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		int satisfaction[500][500];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &satisfaction[i][j]);
			
		int x1, y1, x2, y2;
		for (int i = 0; i < m; i++)
		{
			int total = 0;
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
			for (int j = x1 - 1; j < x2; j++)
				for (int k = y1 - 1; k < y2; k++)
					total += satisfaction[j][k];

			printf("%d\n", total);
		}
	}
	return 0;
}