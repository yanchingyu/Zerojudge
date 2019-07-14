#include<stdio.h>
#include<math.h>

int main() {
	int a,b,c,d;
	int x1,x2;
	while(scanf("%d%d%d",&a,&b,&c)==3){
		d=b*b-4*a*c;
		if(d>0){
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("Two different roots x1=%d , x2=%d",x1,x2);
		}
		else if(d==0){
			x1=(-b)/(2*a);
			printf("Two same roots x=%d",x1);
		}
		else if(d<0){
			printf("No real root");
		}
		else break;
	}
			
 	return 0;
}
