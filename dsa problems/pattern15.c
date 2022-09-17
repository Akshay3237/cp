#include<Stdio.h>

int main(){

    int n;
     printf("enter value of n\n");   
     scanf("%d",&n);
     int i,j;
     for(i=1;i<=3;i++){
     	for(j=1;j<=n;j++){
     		if((i+j)%4==0){
     			printf("*");
			 }
			 else if(i==2 && j%2==0){
			 	printf("*");
			 }
			 else{
			 	printf(" ");
			 }
     		
     		
		 }
     	printf("\n");
     	
	 }








}
