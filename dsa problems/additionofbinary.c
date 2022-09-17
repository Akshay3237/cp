#include<stdio.h>
#include<string.h>
void rev(int n,char ans[n]){
	int i;
	char temp;
	if(i=0,i<n,i++){
		temp=ans[n-1-i];
		ans[n-1-i]=ans[i];
		ans[i]=temp;
	}
	printf("%s",ans);
}


void addition(int n1,int n2,int a[n1],int b[n2]){
	char ans[8];
	int pq,i=0;
	while(n1>0 && n2>0){
	   if(a[n1-1]==0 && a[n2-1]==0){
	   	   if(pq==1){
	   	   	ans[i]='1';
	   	   	pq=0;
			  }
			else{
			ans[i]='0';
			pq=0;	
			}
	   }
	   else if((a[n1-1]==0 && b[n2-1]==1) || (a[n1-1]==1 && b[n2-1]==0)){
	   	    if(pq==1){
	   	   	ans[i]='0';
	   	   	pq=1;
			  }
			else{
			ans[i]='1';
			pq=0;	
			}
		
	   	
	   }
	   else{
	   	    if(pq==1){
	   	    	ans[i]='1';
	   	    	pq=1;
			   }
			   else{
			   	ans[i]=0;
			   	pq=1;
			   }
	   	
	   }
		n1--;
		n2--;
		i++;
	}
	
	if(n1>0){
		if(pq==1){
			if(a[n1-1]==0){
				ans[i]='1';
				pq=0;
			}
			else{
				ans[i]='0';
				pq=1;
			}
			
		}
		else{
			if(a[n1-1]==0){
				ans[i]='0';
				pq=0;
			}
			else{
				ans[i]='1';
				pq=0;
			}
		}
		n1--;
		i++;
	}
	if(n2>0){
		if(pq==1){
			if(b[n2-1]==0){
				ans[i]='1';
				pq=0;
			}
			else{
				ans[i]='0';
				pq=1;
			}
			
		}
		else{
			if(b[n2-1]==0){
				ans[i]='0';
				pq=0;
			}
			else{
				ans[i]='1';
				pq=0;
			}
		}
		n1--;
		i++;
	}
	if(n1==n2){
		if(pq=1){
			if(a[0]=='1' && b[0]=='1'){
				ans[i]='1';
				ans[i+1]='1';
			}
		   	else if((a[0]=='1' && b[0]=='0') || (a[0]=='0' && b[0]=='1')){
		   		ans[i]='0';
		   		ans[i+1]='1';				
		}
		else{
			ans[i]='1';
		}
		}
		else{
			if(a[0]=='1' && b[0]=='1'){
				ans[i]='0';
				ans[i+1]='1';
			}
		   	else if((a[0]=='1' && b[0]=='0') || (a[0]=='0' && b[0]=='1')){
		   		ans[i]='1';
		   						
		}
		else{
			ans[i]='0';
		}
		}
	   i++;	
	}
	int len=strlen(ans);
	rev(len,ans);
}

int main(){
	char a[8];
	char b[8];
	
	printf("enter value of a and b\n");
    scanf("\n");
    scanf("%[^\n]%*c",a);
	scanf("\n");
    scanf("%[^\n]%*c",b);
    int n1=strlen(a);
    int n2=strlen(b);
    addition(n1,n2,a[n1],b[n2]);
	
}
