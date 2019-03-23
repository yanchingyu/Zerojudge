#include <iostream>
#include <string>

using namespace std;
int main(){
	string str;

	while(cin >> str){
		int a, i, counter=0;
		a=str.size();
		for(i=1;i<=a/2;i++){
			if(str[i-1]==str[a-i]){
				counter++;
			}
		}
		if(counter==a/2)
			cout << "yes"<< endl;
		else
			cout << "no"<< endl;
	}
	return 0;
}
