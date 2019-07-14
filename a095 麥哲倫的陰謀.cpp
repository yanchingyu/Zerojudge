#include <iostream>
using namespace std;

int main()
{
	int N, M;

	while (cin >> N >> M)
	{
		if (N > M)
		{
			cout << M + 1 << endl;
		}
		if (N == M)
		{
			cout << M << endl;
		}
	}


	system("pause");
	return 0;
}