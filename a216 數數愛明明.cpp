#include <iostream>
#include <cmath> 
using namespace std;
							//f(1)=1 ; g(1)=1
long long int f(int n);		//ºâf(n) = n + f(n-1) 
long long int g(int n);		//ºâg(n) = f(n) + g(n-1) 

int main(){
	long long int n;
	
	while(cin >> n){
		if (n == EOF) {
			system("pause");
			return 0;
		}
		if (n > 0 && n <= 30000)
			cout << f(n) << " " << g(n) << endl;
	} 
}

long long int f(int n){
	if (n == 1)
		return 1;

	return n + f(n - 1);
}

long long int g(int n){
	if (n == 1)
		return 1;

	return f(n) + g(n - 1);
}
