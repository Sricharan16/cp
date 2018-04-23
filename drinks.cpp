#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		sum=sum+p;
	}
	cout<<fixed<<setprecision(9)<<(float)sum/(n);
}