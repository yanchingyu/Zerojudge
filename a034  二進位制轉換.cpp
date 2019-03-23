#include <iostream>
using namespace std;

int main(){
	int n;
	
	while(cin >> n){
		long long int r=1, sum=0;
		
		while(n>0){
			if(n%2==1)
				sum += r;
				
			n/=2;	
			r *= 10;
		}		
		cout << sum << endl;
	}
} 
