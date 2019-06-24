#include <iostream>
using namespace std;

int main() 
{
	long long int n1, n2;

	while (cin >> n1 >> n2)
	{
		cout << (n1 > n2 ? n1 - n2 : n2 - n1) << endl;
	}

	system("pause");
	return 0;
}

