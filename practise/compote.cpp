#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int a,b,c;
	cin>>a>>b>>c;
	int k=min(a/1,b/2);
	k=min(k,c/4);
	cout<<7*k;
	return 0;
}