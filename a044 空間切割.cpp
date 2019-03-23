#include <iostream>
using namespace std;

int main(){
	int n;
	
	while(cin >> n){
		int d=1, sum=1, total=2;
		
		if(n==1)
			cout << 2;
		else{
			for(int i=2;i<=n;i++,d++){
				sum += d;
			
				total += sum;	
			}
			
			cout << total; 
		}
		cout << endl;
		
	}
} 
