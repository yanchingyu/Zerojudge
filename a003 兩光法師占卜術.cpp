#include<stdio.h>

int main() {
	int M,D,S;//M=���,D=��� 
	while(scanf("%d %d",&M,&D)==2){
		S=(M*2+D)%3;
		if(S==0){
			puts(" ���q ");
		}
		if(S==1){
			puts(" �N ");
		}
		if(S==2){
			puts(" �j�N ");
		}
		else break;
	}
	
 	return 0;
}
