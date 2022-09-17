#include<stdio.h>
int natural(int n){
return (n*(n+1))/2;
 	
}
int main(){
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	printf("sum of %d first natural number is %d",n,natural(n));
	
	return 0;
}

