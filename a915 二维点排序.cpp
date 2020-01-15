#include <iostream>
using namespace std;

void Swap(int &t1, int &t2)
{
	int temp = t1;
	t1 = t2;
	t2 = temp;
}

void QSort(int **ar, int left, int right)
{
	if (left < right)
	{
		int i = left, j = right + 1,
			pivot = ar[left][0];
		while (i < j)
		{
			while (ar[++i][0] < pivot);
			while (ar[--j][0] > pivot);
			if (i < j)
			{
				Swap(ar[i][0], ar[j][0]);
				Swap(ar[i][1], ar[j][1]);
			}
		}
		Swap(ar[left][0], ar[j][0]);
		Swap(ar[left][1], ar[j][1]);

		QSort(ar, left, j - 1);
		QSort(ar, j + 1, right);
	}
}

int main()
{
	int n;

	while (cin >> n)
	{
		/*配置動態二維陣列*/
		int **ar = new int*[n];
		for (int i = 0; i < n; i++)
		{
			ar[i] = new int[2];

			int p, q;
			cin >> p >> q;
			ar[i][0] = p;	ar[i][1] = q;
		}

		QSort(ar, 0, n - 1);	/*對第一行排列 由小到大*/
		/*對第二行排列 由小到大*/
		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n - 1; j++)
				if (ar[j][0] == ar[j+1][0] && ar[j][1] > ar[j+1][1])
					Swap(ar[j][1], ar[j + 1][1]);	

		for (int i = 0; i < n; i++)
		{
			cout << ar[i][0] << " " << ar[i][1] << endl;
		}
	}

	system("pause");
}