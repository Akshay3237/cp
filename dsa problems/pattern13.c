#include<stdio.h>

int main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	int i,j;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		for(j=2;j<=i;j++){
			printf("%d",j);
		}
		
		
		printf("\n");
		
	}
	
	
	

}




