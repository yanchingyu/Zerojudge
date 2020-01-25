#include <iostream>
#include <cmath>
using namespace std;

long long getk(int a, int b)
{
	if (a > b)
	{
		int temp = a / b;
		a %= b;
		if (a)						
		{
			long long sum = getk(b, a) + 1;				//每次交換要加 1
			for (int i = 0; i < temp; i++)
				sum = sum + sum;
			return sum;
		}
		else
			return pow(2, temp - 1);		//如果a==n,b==1則輸出 2^(n-1)
	}
	else
	{
		return a == b ? 1 : getk(b, a) + 1;		//如果a==b==1，輸出1 ， 如果a<b 執行遞迴(a和b交換) 結束後在加1
	}
}

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << getk(a, b) << endl;
	}
	system("pause");
}