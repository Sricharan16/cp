#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,n;
	cin>>n>>a>>b;
	// if(n-b==a)
	// 	cout<<"1";
	// else if(n-b>a)
	// 	cout<<n-a-b+1;
	// else 
	// 	cout<<"0";
	cout<<n-max(n-b,a+1)+1;
	return 0;
}