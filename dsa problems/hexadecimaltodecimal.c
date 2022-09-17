#include<stdio.h>
#include<string.h>
#include<math.h>

int convert(int n,int k[n]);
int main(){
	char n[16];
	aksh:
	printf("enter value of n\n");
	scanf("\n");
	scanf("%[^\n]%*c",n);
	int x=strlen(n);
	int k[x];
	int i;
	for(i=0;i<x;i++)
	{
		switch(n[i]){
	     case 0:
	     	k[i]=0;
	    break;
		 case '1':
	     	k[i]=1;
	    break;
		case '2':
	     	k[i]=2;
	    break;
		case '3':
	     	k[i]=3;
	    break;
		case '4':
	     	k[i]=4;
	    break;
		case '5':
	     	k[i]=5;
	    break;
	    case '6':
	     	k[i]=6;
	    break;
	    case '7':
	     	k[i]=7;
	    break;
	    case '8':
	     	k[i]=8;
	    break;
	    case '9':
	     	k[i]=9;
	    break;
	    case 'a':
	     	k[i]=10;
	    break;
	    case 'A':
	     	k[i]=10;
	    break;
	    case 'b':
	     	k[i]=11;
	    break;
	    case 'B':
	     	k[i]=11;
	    break;
	    case 'c':
	     	k[i]=12;
	    break;
	    case 'C':
	     	k[i]=12;
	    break;
	    case 'd':
	     	k[i]=13;
	    break;
	    case 'D':
	     	k[i]=13;
	    break;
	    case 'e':
	     	k[i]=14;
	    break;
		case 'E':
	     	k[i]=14;
	    break;
	    case 'f':
	     	k[i]=15;
	    break;
	    case 'F':
	     	k[i]=15;
	    break;
	    default:
	         printf("\nwrite properly\n");
	         goto aksh;
	    break;
		}
		
	}
		
	printf("%d",convert(x,k));	
		
		
     return 0;		
}
int convert(int n,int k[n]){
	int p=0;
	int ans=0;
	int i;
	for(i=n-1;i>=0;i--){
		ans=ans+k[i]*pow(16,p);
		p++;
	}
	
	return ans;
	
	
	
}












