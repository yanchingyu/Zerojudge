#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, m;
	
	while(cin >> n >> m){
		int s=0;
		for(int i=n;i<=m;i++){
			int counter=0, x=i, sum=0;
		
			while(x>0){
				x/=10;
				counter++;
			}
			x=i;
			while(x>0){
				sum += pow(x%10,counter);
				x/=10;
			}
			if(sum==i){
				cout << sum << " ";
				s++;
			}
		}
		if(s==0)
			cout << "none";
		
		cout << endl;
	}
	return 0;
} 
