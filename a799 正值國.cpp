#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		cout << ((n < 0) ? -n : n) << endl;
	}
	system("pause");
}