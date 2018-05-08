#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	int mini=min(x,y);
	mini=min(mini,z);
	int maxi=max(x,y);
	maxi=max(maxi,z);
	cout<<maxi-mini;

}