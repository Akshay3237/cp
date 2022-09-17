#include<stdio.h>
#include<string.h>
void convert(int n){
	char ans[16],i=0;
	int x=1,ld;
	while(x<=n){
		x=x*16;
	}
	x/=16;
	while(x>0){
		ld=n/x;
		n=n-ld*x;
		x=x/16;
		switch(ld){
			case 0:
				ans[i]='0';
			break;
			case 1:
				ans[i]='1';
			break;
			case 2:
				ans[i]='2';
			break;
			case 3:
				ans[i]='3';
			break;
			case 4:
				ans[i]='4';
			break;
			case 5:
				ans[i]='5';
			break;
			case 6:
				ans[i]='6';
			break;
			case 7:
				ans[i]='7';
			break;
			case 8:
				ans[i]='8';
			break;
			case 9:
				ans[i]='9';
			break;
			case 10:
				ans[i]='A';
			break;
			case 11:
				ans[i]='B';
			break;
			case 12:
				ans[i]='C';
			break;
			case 13:
				ans[i]='D';
			break;
			case 14:
				ans[i]='E';
			break;
			default:
				ans[i]='F';
			break;
			
		}
		i++;
	}
	for(i=0;i<strlen(ans);i++){
		printf("%c",ans[i]);
	}
	
}
int main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	
	convert(n);
}

