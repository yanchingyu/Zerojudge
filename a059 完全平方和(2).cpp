#include <iostream>
using namespace std;

int main(){
	int a, b, T;
	
	while(cin >> T){
		for(int i=1;i<=T;i++){
			int sum=0;
			cin >> a >> b;
			
			if(0<=a&&a<=b&&b<=1000){
				for(int i=a;i<=b;i++){
					for(int j=1;j<=i;j++){
						if(j*j==i)
							sum +=i;
					}
				}
			}
			cout << "Case " << i << ": " << sum << endl;
		}
	}
}
