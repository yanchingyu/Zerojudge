#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, m;
	
	while(cin >> n >> m){
		if(n>0&&m>0&&n<pow(2,31)&&m<pow(2,31)){
			while(m>0){
				int r=n%m;
				n=m;
				m=r;
			}
			cout << n << endl;
		}
	}
} 
