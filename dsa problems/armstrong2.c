#include<stdio.h>
#include<math.h>
int arm(int n){
int i,j[3],k;
	int orgn=n,org1=n;
	for(k=3;k>=1;k--){
	for(i=1;i<=k;i++){
		j[k-i]=n%10;
		}
		n=n/10;
	}
	
	k=0;
	for(i=1;i<=3;i++){
		k=k+pow(j[i-1],3);
	}
	if(k==orgn)
	{
		printf(" %d is armstrong number\n",org1);
		
	}
	else
	{
		printf("%d is not armstrong number\n",org1);
	}
	
		
}

int main(){
	int a,b;
	int i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
    	arm(i);
    	}
    
}


