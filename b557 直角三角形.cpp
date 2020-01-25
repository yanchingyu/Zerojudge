#include <iostream>
#include <cmath>
using namespace std;

void Swap(int &t1, int &t2)
{
	int temp = t1;
	t1 = t2;
	t2 = temp;
}

void QSort(int *ar, int left, int right)
{
	if (left < right)
	{
		int i = left, j = right + 1,
			pivot = ar[left];

		while (i < j)
		{
			while (ar[++i] < pivot);
			while (ar[--j] > pivot);
			if (i < j) Swap(ar[i], ar[j]);
		}
		Swap(ar[left], ar[j]);

		QSort(ar, left, j - 1);
		QSort(ar, j + 1, right);
	}
}

int main()
{
	int T;
	while (cin >> T)
	{
		while (T--)
		{
			int N;
			cin >> N;

			int *arr = new int[N];
			for (int i = 0; i < N; i++)
			{
				int n;
				cin >> n;
				arr[i] = n;
			}

			QSort(arr, 0, N - 1);
			int count = 0;
			for (int i = 0; i < N-2; i++)
			{
				for (int j = i + 1; j < N-1; j++)
				{
					for (int k = j + 1; k < N; k++)
					{
						if (pow(arr[i], 2) + pow(arr[j], 2) == pow(arr[k], 2))
						{
							count++;
						}
					}
				}
			}
			cout << count << endl;
		}
	}

	system("pause");
}