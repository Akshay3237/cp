#include<stdio.h>
void max(int n,int a[n]){
	int ans=-199999;
	int i;
	for(i=0;i<n;i++){
		if(ans<a[i]){
			ans=a[i];
		}
		}
	printf("\nmaximum value id %d",ans);
}
void min(int n,int a[n]){
	int ans=199999;
	int i;
	for(i=0;i<n;i++){
		if(ans>a[i]){
			ans=a[i];
		}		
	}
	printf("\nminimum value is %d",ans);
}

int main(){
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	max(n,a);
	min(n,a);
	
}
