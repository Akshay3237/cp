#include<stdio.h>

void main()
{
           int n,i,j,end,start,size;
		  head:
		   printf("enter value of n");
		   scanf("%d",&n);
		   size=2*n-1;
		   int a[size][size];
		   start=0;
		   end=size-1;
	while(n!=0)	 {  
		   for(i=start;i<=end;i++){
		   	 for(j=start;j<=end;j++){
		   	 	if(i==start || j==start || i==end || j==end){
		   	 		a[i][j]=n;
					}
		   	 	
				}
		   }
		   n--;
		   start++;
		   end--;
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	goto head;
		   	
}
