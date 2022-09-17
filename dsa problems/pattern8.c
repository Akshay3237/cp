#include<stdio.h>

int main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	int i,j,k,l,i1,j1,k1,l1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		int space=2*n-2*i;
		for(k=1;k<=space;k++){
			printf(" ");
		}
		for(l=1;l<=i;l++){
			printf("*");
		}
		printf("\n");
	}
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		int space=2*n-2*i;
		for(k=1;k<=space;k++){
			printf(" ");
		}
		for(l=1;l<=i;l++){
			printf("*");
		}
		printf("\n");
	}
	
}
