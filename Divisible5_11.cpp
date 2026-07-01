#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a value: ";
	cin>>n;
	if(n%5==0 && n%11==0){
	cout<<"Yes it is divisible by both 5 and 11";
	}
	else{
	cout<<"No it is not divisible by both 5 and 11";
	}
}
