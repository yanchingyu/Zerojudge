#include <stdio.h>

int main(){
	int n[9][9];
	int row,column,jiu1,jiu2,jiu3,jiu4,jiu5;
	int i,j;
	int m;
	
	while(1){
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				scanf("%d",&n[i][j]);
				row += n[i][j];
				if(n[0][0]==5&&n[0][1]==5)
					printf("no\n");
			}
			if(row==45){
				row=0;
				m += 1;
			}
		}	
		for(j=1;j<9;j++){
			for(i=0;i<9;i++){
				column += n[i][j];
			}
			if(column==45){
				column=0;
				m += 1;
			}
		}
		for(i=0;i<9;i++){
			for(j=0;j<3;j++)
				jiu1 += n[i][j];
			for(j=3;j<6;j++)
				jiu2 += n[i][j];
			for(j=6;j<9;j++)
				jiu3 += n[i][j];
			if(jiu1==45&&jiu2==45&&jiu3==45){
				jiu1=0; jiu2=0; jiu3=0;
				m += 1;
				}
		}
		for(i=0,j=0;i<9,j<9;i++,j++){
			jiu4 += n[i][j];
		}
		for(i=8,j=8;i>=0,j>=0;i--,j--){
			jiu5 += n[i][j];
		}
		if(jiu4==45&&jiu5==45){
			m +=1;
		}
		if(m==22)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;	
} 
