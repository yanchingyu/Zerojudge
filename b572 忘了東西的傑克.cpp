#include <iostream>
using namespace std;

int main()
{
	int N;
	while (cin >> N)
	{
		while (N--)
		{
			int h1, m1, h2, m2, m3;
			cin >> h1 >> m1 >> h2 >> m2 >> m3;
			
			int total = (h2 - h1) * 60 + (m2 - (m1 + m3));
			
			if (total >= 0)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
			
		}
	}
	system("pause");
}

/*https://zerojudge.tw/ShowProblem?problemid=b572*/