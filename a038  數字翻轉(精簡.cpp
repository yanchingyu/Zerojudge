#include <iostream>
using namespace std;

int main(){
	int n;
	
	while(cin >> n){
		int sum=0;
		
		while(n>0){
			sum*=10;
			sum += n%10;
			
			n /= 10;
		}
		cout << sum << endl;
	}
} 
