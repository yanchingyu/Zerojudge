#include <stdio.h>

int main()
{
	int a[4];

	while (scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]) == 4)			//�|�Ӥ���0-9�������Ʀr�A�N���T���K�X
	{
		int b[4], n;

		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d %d %d", &b[0], &b[1], &b[2], &b[3]);						//�C�榳�|�Ӥ���0-9�������Ʀr�A�C��U�N��@�չ��ժ��K�X�C
			
			int p = 0, q = 0, count[4] = {0};

			for (int j = 0; j < 4; j++)
			{
				if (a[j] == b[j])
				{
					p++;
					count[j]++;
				}
			}
			
			int count1[4] = { 0 };
			for (int j = 0; j < 4; j++)
			{
				if (count[j] == 1)
					continue;
				for (int k = 0; k < 4; k++)
				{
					if (b[j] == a[k] && count[k] == 0 && count1[k] == 0)
					{
						q++;
						count1[k]++;
						break;
					}
				}
			}
			printf("%dA%dB\n", p, q);
		}
		printf("\n");
	}

	return 0;
}