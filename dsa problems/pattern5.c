#include<stdio.h>

int main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=n-i){
				printf(" ");
			}
			else{
				printf("*");
			}
			
			
		}
		
		printf("\n");
	}
	
}
