#include<stdio.h>
int convert(int n);

void pi(int i){
	printf("%d",i);
}
void pc(char c){
   printf("%c",c);
}
void pf(float f){
	printf("%f",f);
}
void ps(char s[10000]){
	printf("%s",s);
}

int main(){
	int n;
	ps("enter value of n ");
	scanf("%d",&n);
	
	pi(convert(n));
	
	
}

int convert(int n){
	int p=0;
	int ans=0;
	int i;
	int y;
	for(i=n;n>0;i++){
		y=n%10;
		ans=ans+y*pow(8,p);
		p++;
		n=n/10;
	}
	
	return ans;
}
