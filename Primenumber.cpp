#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a value: ";
	cin>>n;
	int count=0;
	if(n==1){
		cout<<"It is neither prime nor compiste number";
	}
	for(int i=2;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<" It is a Prime number";
	}
	else{
		cout<<"It is not a Prime number";
	}
}
