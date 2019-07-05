#include <iostream>
using namespace std;

int main() 
{
	int n1, n2;

	while (cin >> n1 >> n2)
	{
		if (n1 == 0 && n2 == 0)
			break;

		int carry = 0, count = 0;
		while (n1 || n2)
		{
			if (n1 % 10 + n2 % 10 + count >= 10)
			{
				count = 0;
				count++;
				carry += 1;
			}
			else
			{
				count = 0;
			}
			n1 /= 10;
			n2 /= 10;
		}

		if (carry == 0)
			cout << "No carry operation." << endl;
		else if (carry == 1)
			cout << carry << " carry operation." << endl;
		else if (carry > 1)
			cout << carry << " carry operations." << endl;
		else
			cout << "error, re-enter";
	}

	system("pause");
	return 0; 
}
