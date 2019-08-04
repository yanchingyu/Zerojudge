#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void radish(string &s, int x, int y, int z, int w, int n, int m)
{
	int j, count = 0;
	stringstream ss;
	ss.clear();
	ss << s;

	while (ss >> j)
	{
		m -= n * count;

		if (m <= 0)
			break;

		switch (j)
		{
		case 0: break;
		case 1: m += x; break;
		case 2: m += y; break;
		case 3: m -= z; break;
		case 4: m -= w, count++; break;
		default:cout << "error!"; break;
		}
	}
	if (m <= 0)
		cout << "bye~Rabbit" << endl;
	else
		cout << m << "g" << endl;
}

int main()
{
	int N;
	while (cin >> N)
	{
		while (N--)
		{
			int x, y, z, w, n, m;
			string s;

			cin >> x >> y >> z >> w >> n >> m;
			cin.ignore();
			getline(cin, s);

			radish(s, x, y, z, w, n, m); 
		}
	}


	system("pause");
	return 0;
}