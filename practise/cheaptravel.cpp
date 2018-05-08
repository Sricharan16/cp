	#include<iostream>
	#include<bits/stdc++.h>
	#include<string>
	using namespace std;
	int main()
	{
		int n,m,a,b;
		cin>>n>>m>>a>>b;
		int mini=9999999;
		mini=min(mini,n*a);
		mini=min(mini,(n/m)*b + (n%m)*a);
		mini=min(mini,((n/m)+1)*b);
		cout<<mini;
		return 0;
	}