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
	int n;
	printf("enter value of n");
	scanf("%d",&n);
    printf("%d",fa(n));
   
}

