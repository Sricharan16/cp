#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std; 
bool check(int p)
{
	int a[5]={-1};
	for(int i=4;i>=0;i--)
	{
		a[i]=p%10;
		p=p/10;
		if(p==0)
			break;

	}
	sort(a,a+5);
	//for(int i=0;i<4;i++)cout<<a[i]<<" ";
	for(int i=0;i<4;i++)
	{
		if(a[i+1]==a[i]  && a[i+1]!=-1)
			return false;
	}
	return true;
}
int main()
{   int n;
	cin>>n;
	for(int i=n+1;i<10000;i++)
	{
		if(check(i))
		{
			cout<<i;
			break;
		}
	}
	return 0;
}