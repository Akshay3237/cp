#include<stdio.h>
void pm(int n);
int main(){
	int a,b;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	int i;

	for(i=a;i<=b;i++){
		pm(i);
		
	}
	
}

void pm(int n){
	int i,c=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
			}
	if(c==2){
		printf("%d is prime number\n",n);
	}
	else{
		printf("%d is not a prime number\n",n);
	}
	
	
	
	
}
