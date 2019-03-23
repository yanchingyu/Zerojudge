#include <iostream>
using namespace std;

int main(){
	int T, n, m;
	
	while(cin >> T){
		for(int i=1;i<=T;i++){
			int sum=0;
			cin >> n >> m;
			
			for(int j=1;j<=m;j++){
				if(j*j>=n&&j*j<=m)	
					sum += j*j;	 
			}	
			cout << "Case " << i << ": ";
			cout << sum << endl;
			
		}	
		
	}
}
