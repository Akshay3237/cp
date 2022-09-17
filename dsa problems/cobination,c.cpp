#include<stdio.h>
int fa(int n){
    int i;
  	int d=1;
  	for(i=2;i<=n;i++){
  		d=d*i;
	  }
	
  return d;	
}

int main(){
	int n,r,k;
	printf("enter value of n");
	scanf("%d",&n);
	printf("\n enter value of r\n");
	scanf("%d",&r);
    k=fa(n)/(fa(r)*fa(n-r));
   printf("value of %d c %d is %d",n,r,k);
}

