#include<Stdio.h>
int main(){
	int n;
	printf("enter value of n\n");
	int i,j;
	scanf("%d",&n);
		for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}

	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	
}
