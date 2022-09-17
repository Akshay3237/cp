#include<stdio.h>
int sum(int a,int b);
int main(){
	printf("enter two values for sum");
	int k,p;
	scanf("%d %d",&k,&p);
	printf("sum is %d",sum(k,p));
	
	
}
int sum(int a,int b){
	return a+b;	
}




