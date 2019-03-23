#include<stdio.h>

int main() {
	int a,b,c,d,t=0,i,h,k;
	scanf("%d",&t);
	if(t<=20){
		for(i=0;i<t;i++){
			scanf("%d %d %d %d",&a,&b,&c,&d);
			h=b-a;
			k=b/a;
			if((b-a)==(c-b)){
				printf("%d %d %d %d %d \n",a,b,c,d,d+h);
			}
			else if((b/a)==(c/b)){
				printf("%d %d %d %d %d \n",a,b,c,d,d*k);
			}
		}
	}
 	return 0;
}
