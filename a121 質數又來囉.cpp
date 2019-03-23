#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b;
	
	while(cin >> a >> b){		 // a to b的質數 
		int sum=0;   			//總共 
			
		for(int i=a;i<=b;i++){
			int s=1;				
					
			for(int j=2;j*j<=i;j++){
				if(i%j==0){
					s=0;
					break;	
				}				
			}
			if(s==true&&i!=1)
				sum++;
		}
		cout << sum << endl;
	}
}
