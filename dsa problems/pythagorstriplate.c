#include<stdio.h>
int ti(int x,int y,int z);
int max(int a,int b);
int main(){
	int x,y,z;
	printf("enter pythagoras thriplates\n");
	scanf("%d %d %d",&x,&y,&z);
	if(ti(x,y,z)==1){
		printf("pythagoras tiplates");
	}
	else{
		printf("not a pythagoras triplate");
	}
	
	
	
	
}
int ti(int x,int y,int z){
	int a=max(x,max(y,z));
	int b,c;
	
	if(a==x){
		b=y;
		c=z;
		
	}
	else if(a==y){
		b=x;
		c=z;
	}
	else{
		b=x;
		c=y;
	}
	if(a*a==b*b+c*c){
		return 1;
	}
	else{
		return 0;
	}
	
}
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
	
	
}


