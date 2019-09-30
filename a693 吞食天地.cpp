#include <stdio.h>

int main()
{
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		int satisfaction[100000];

		for (int i = 0; i < n; i++)
			scanf("%d", &satisfaction[i]);

		for (int i = 0; i < m; i++)
		{
			int L, R, total = 0;
			scanf("%d %d", &L, &R);
			for (L; L <= R; L++)
			{
				total += satisfaction[L - 1];
			}
			printf("%d\n", total);
		}
	}
	return 0;
}