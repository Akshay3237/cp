#include<stdio.h>
int main(){
	int n,i;
	printf("enter a number\n");
	scanf("%d",&n);
	int c=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	
	if(c==2){
		printf("%d is a prime number\n",n);
	}
	else{
		printf("%d is not a prime number\n",n);
	}
	
}







