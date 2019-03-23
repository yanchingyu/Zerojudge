#include <stdio.h>

int main(){
	int a[10][10];
	int x,y,i,j;
	while(scanf("%d%d",&x,&y)!=EOF){  //¿é¤J¦æ¦C¼Æ 
		for(i=1;i<=x;i++){
			for(j=1;j<=y;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(i=1;i<=y;i++){
			for(j=1;j<=x;j++){
				printf("%d ",a[j][i]);
			}
		puts("");
		}
	}
	return 0;
}
