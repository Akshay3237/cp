#include<stdio.h>
#include<math.h>
int max1(int n1,int n2);
int min(int n1,int n2);
int reverse(int n);
int additionBinary(int b1,int b2);


void main(){
	int binary1,binary2;
	printf("enter first binary number\n");
	scanf("%d",&binary1);
    printf("enter second binary number\n");
	scanf("%d",&binary2);
    
	printf("addition of %d and %d is %d",binary1,binary2,additionBinary(binary1,binary2));
	
	
}

int max1(int n1,int n2){
	if(n1>n2){
		return n1;
	}
	else{
		return n2;
	}	
}


int min1(int n1,int n2){
	if(n1>n2){
		return n2;
	}
	else{
		return n1;
	}	
}

int additionBinary(int b1,int b2){
	int max=max1(b1,b2);
	int min=min1(b1,b2);
	int carry=0,sum=0;
	while(max>0){
		int tem1=max%10;
		int tem2=min%10;
		max/=10;
		min/=10;
		
		int mid=(tem1+tem2+carry)%2;
		carry=(tem1+tem2+carry)/2;
		sum=sum*10+mid;
		if(max==0 && carry==1){
			sum=sum*10+mid;
		}
	}
	int o=reverse(sum);
	return o;
}

int reverse(int n){
	int ans=0;
	int i;
	while(n>0){
		i=n%10;
		ans=ans*10+i;
		n/=n;
		
	}
	
	return ans;
	
}




