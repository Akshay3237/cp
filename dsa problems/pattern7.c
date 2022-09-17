#include<stdio.h>

int main(){
	int n;
	int i,j,k=1;
	printf("enter value of n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" %d",k);
			
		}
		printf("\n");
		k++;
		
	}
	
	
	
	
	
}
