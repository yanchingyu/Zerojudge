#include <stdio.h>

int main()
{
	int N;

	while (scanf("%d",&N))
	{
		if (N == 0)
			break;

		char binary[31] = { 0 };

		int i = 0, carry = 0;
		while (N > 0)
		{
			binary[i] = N % 2;
			N /= 2;
			i++;
		}

		binary[0] += 1;
		for (int j = 0; j < i; j++)
		{
			if (binary[j] == 2)
			{
				binary[j] %= 2;
				binary[j + 1]++;
				carry++;
			}
		}
		printf("%d\n", carry);
	}

	return 0;
}