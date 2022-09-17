#include<stdio.h>
int c(int n,int r){
	int k=fa(n)/(fa(r)*fa(n-r));
    return k;
}

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
	int i,j;
	for(i=0;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("%d ",c(i,j));
		}
		printf("\n");
		
	}
}

