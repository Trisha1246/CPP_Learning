#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int original;
	int rev=0;
	original=n;
	while(n>0){
		int rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	if(original==rev){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not an Palindrome";
	}
}
