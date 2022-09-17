#include<stdio.h>
int fibo(int n);
int main(){
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	fibo(n);
	
	}

int fibo(int n){
	int a[n],i;
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++){
		a[i]=a[i-1]+a[i-2];
		}
    for(i=0;i<n;i++){
    	printf(" %d,",a[i]);
	}
	
return 0;	
	
	
}

