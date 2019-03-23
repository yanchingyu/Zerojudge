#include <iostream>
using namespace std;

int main(){
	int n, m, k=1, sum[3]={0};
	
	while(cin >> n){
		for(int i=1;i<=n;i++){
			cin >> m;
			
			sum[m%3]++;
		}
		for(int i=0;i<=2;i++)
			cout << sum[i] << " ";
	}
}

