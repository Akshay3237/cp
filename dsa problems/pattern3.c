#include<stdio.h>

int main(){
	int r,c,i,j;
	printf("enter row and coloumn");
	scanf("%d%d",&r,&c);
	
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(i==1 || j==1 || i==r || j==c){
				printf("*");
			}
			else{
				printf(" ");
			}
			
			
			
		}
		printf("\n");
		
	}
	
	
	
	
}
