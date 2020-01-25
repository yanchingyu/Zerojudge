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
			long long sum = getk(b, a) + 1;				//�C���洫�n�[ 1
			for (int i = 0; i < temp; i++)
				sum = sum + sum;
			return sum;
		}
		else
			return pow(2, temp - 1);		//�p�Ga==n,b==1�h��X 2^(n-1)
	}
	else
	{
		return a == b ? 1 : getk(b, a) + 1;		//�p�Ga==b==1�A��X1 �A �p�Ga<b ���滼�j(a�Mb�洫) ������b�[1
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