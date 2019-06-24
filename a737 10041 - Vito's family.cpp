#include <iostream>
using namespace std;

void bubbleSort(int temp[], int n1);

int main() 
{
	int r, s1;

	while (cin >> r)
	{
		int count = 0;
		int *sum = new int[r];
		for (int i = 0; i < r; i++)
			sum[i] = 0;
	
		while (r-- && cin >> s1)
		{
			int *temp = new int[s1];

			for (int i = 0; i < s1; i++)
				cin >> temp[i];

			if (s1 % 2 == 0)
			{
				bubbleSort(temp, s1);
				int mid = temp[s1 / 2 - 1];
				for (int i = 0; i < s1; i++)
				{
					if (mid - temp[i] >= 0)
						sum[count] += mid - temp[i];
					else
						sum[count] += -(mid - temp[i]);
				}
			}
			else
			{
				bubbleSort(temp, s1);
				for (int i = 0; i < s1; i++)
				{
					int mid = temp[s1 / 2];
					if (mid - temp[i] >= 0)
						sum[count] += mid - temp[i];
					else
						sum[count] += -(mid - temp[i]);
				}
			}

			count++;
			delete[] temp;
		}

		for (int i = 0; i < count; i++)
			cout << sum[i] << endl;

		delete[] sum;
	}
	system("pause");
	return 0;
}

void bubbleSort(int temp[], int n1)
{
	for (int i = 0; i < n1; i++) 
	{
		for (int j = 0; j < n1 - i - 1; j++)
		{
			if (temp[j] > temp[j + 1])
			{
				int temp1 = temp[j + 1];
				temp[j + 1] = temp[j];
				temp[j] = temp1;
			}
		}
	}
}


