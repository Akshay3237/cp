// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
void search(int n,int a[],int key){
	int i;
	for(i=0;i<n;i++){
		if(key==a[i]){
			cout<<i;
		}
	}
	
}
int main(){
	int n,key;
	cin>>n;
	int i,a[i];
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>key;
	search(n,a,key);
	return 0;
}
