#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int max=0;
	int A[n]={0};
	int pos=0,t;
	for(int i=0;i<m;i++)
	{	pos=0;
		max=0;
		for(int j=0;j<n;j++)
		{
			
			cin>>t;
			if(t>max)
			{
				pos=j;
				max=t;
			}
		}
		A[pos]++;
	}
	for(int i=0;i<n;i++)cout<<A[i]<<" ";
		cout<<endl;
	max=A[0];
	pos=1;
	for(int i=1;i<n;i++)
	{
		if(max<A[i])
		{
			pos=i+1;
			max=A[i];
		}
	}
	cout<<pos;
	return 0;
}
