#include <iostream>
using namespace std;

int main()
{
	int a, b, n;

	while (cin >> a >> b >> n)
	{	
		cout <<  a / b << ".";
		a %= b;
		
		while (n--)
		{
			a *= 10;
			cout << a / b;
			a %= b;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}