#include<stdio.h>
int reverse(int n){
	int ans=0;
	while(n>0){
		int lastDigit=n%10;
		ans=ans*10+lastDigit;
		n/=10;
	}
	
	return ans;
}

int main(){
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	printf("\n%d",reverse(n));
	
	
	
}
