#include<stdio.h>
#include<math.h>


int main(){
	int b1,b2;
	int tem1,tem2;
	int max, min, carry=0,sum=0,mid,i=0,po=1;
	printf("enter first binary number\n");
	scanf("%d",&b1);
    printf("enter second binary number\n");
	scanf("%d",&b2);
	
	
	if(b1>b2){
		max=b1;
		min=b2;
	}
	else{
		max=b2;
		min=b1;
	}
	while(max>0){
		tem1=max%10;
		max=max/10;
		
		tem2=min%10;
		min=min/10;
		
		mid=(tem1+tem2+carry)%2;
		carry=(tem1+tem2+carry)/2;
		sum=mid*po+sum;
		po*=10;
		
		if(max==0 && carry==1){
			sum=po*mid+sum;
		}
		
	}
printf("%d",sum);	
	
}
