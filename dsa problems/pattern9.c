#include<stdio.h>
int main(){
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	int i,j;
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
		
	}
	
}

