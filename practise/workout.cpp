#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int t;
	int a=0,b=0,c=0;
	for(int i=0;i<n;i++)
	{
		if(i%3==0)
		{
			cin>>t;
			a=a+t;
		}
		if(i%3==1)
			{
			cin>>t;
			b=b+t;
		}
		if(i%3==2)
			{
			cin>>t;
			c=c+t;
		}
	}
	if(a>b && a>c)
		cout<<"chest";
	if(b>c && b>a)
		cout<<"biceps";
	if(c>a && c>b)
		cout<<"back";
	return 0;
}