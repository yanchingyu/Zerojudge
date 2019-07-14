#include <stdio.h>

int main(){
	int t,i;
	while((scanf("%d",&t)==1)){
		for(i=2;i<=t;i++){
			int time =0;
			while(t%i==0){
				t=t/i;
				time++;
			}
		if(time==1)
			printf("%d",i);
		else if(time>=1)
			printf("%d^%d",i,time);
		if(t != 1 && time != 0)
			printf(" * ");
		}
		puts("");
	}
	return 0;
}
