#include<Stdio.h>
int main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	int i,k[100];
	int j;
	for(i=1;i<=100;i++){
		k[i-1]=n%10;
		n=n/10;
	if(n<=0){
		break;
	}	
	
	}
	for(j=i;j>=1;j--){
		printf("%d",k[i-j]);
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}



