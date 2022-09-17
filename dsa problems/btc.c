#include<stdio.h>

int convert(int n){
	int x=1,ans=0,ld;
	while(x<=n){
		x=x*2;
	}
	x/=2;
	while(x>0){
		ld=n/x;
		n=n-ld*x;
		x=x/2;
		ans=ans*10+ld;
		
		
	}
	
	
	return ans;
	
}

int main(){
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	printf("%d",convert(n));
	
	
	
}










