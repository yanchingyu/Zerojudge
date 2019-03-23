#include<stdio.h>

int main() {
	int M,D,S;//M=月份,D=日期 
	while(scanf("%d %d",&M,&D)==2){
		S=(M*2+D)%3;
		if(S==0){
			puts(" 普通 ");
		}
		if(S==1){
			puts(" 吉 ");
		}
		if(S==2){
			puts(" 大吉 ");
		}
		else break;
	}
	
 	return 0;
}
