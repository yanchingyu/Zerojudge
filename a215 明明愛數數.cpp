#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	int n, m;		//n一開始的數 , n + n+1 + .... >= m 
	
	while(cin >> n >> m){
		int sum=0, count=0;
		
		if(m-n<=pow(10,5)){
			for(int i=n;;i++){
				sum += i;
				count++;
				if(sum>m){
					cout << count << endl;
					break;
				}
			}	
		}		
	}
}
