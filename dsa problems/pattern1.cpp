#include<stdio.h>
#include<string.h>

int main(){
	
	int c,r;
	int i,j;
	
	printf("enter coloumn numbers and row numbers \n");
	scanf("%d%d",&c,&r);
	
	for(i=1;i<=r;i++){
		
		for(j=1;j<=c;j++){
			printf("*");
		}
		printf("\n");
	}
	
  	return 0;

}
