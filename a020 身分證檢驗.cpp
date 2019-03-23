#include <iostream>
using namespace std;

int main(){
	int a;
	char n;
	
	while(cin >> n >> a){
		int sum=0;
		switch(n){
			case 'A':	n=10;	break;
			case 'B':	n=11;	break;
			case 'C':	n=12;	break;
			case 'D':	n=13;	break;
			case 'E':	n=14;	break;	
			case 'F':	n=15;	break;
			case 'G':	n=16;	break;
			case 'H':	n=17;	break;
			case 'I':	n=34;	break;
			case 'J':	n=18;	break;
			case 'K':	n=19;	break;
			case 'L':	n=20;	break;
			case 'M':	n=21;	break;
			case 'N':	n=22;	break;
			case 'O':	n=35;	break;
			case 'P':	n=23;	break;
			case 'Q':	n=24;	break;
			case 'R':	n=25;	break;
			case 'S':	n=26;	break;
			case 'T':	n=27;	break;
			case 'U':	n=28;	break;
			case 'V':	n=29;	break;
			case 'W':	n=32;	break;
			case 'X':	n=30;	break;
			case 'Y':	n=31;	break;
			case 'Z':	n=33;	break;
			}
		sum += n%10*9 + n/10 + a%10;
		
		for(int i=10,j=1;i<=a,j<=8;i*=10,j++){
			sum += a/i%10*j;	
		}
	
		if(sum%10==0)
			cout << "real\n";
		else
			cout << "fake\n";
	}
}
