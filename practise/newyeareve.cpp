#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,k;
	cin>>n>>k;
	if(k==1)
	{
		cout<<n;
		return 0;
	}
	else 
	{
		int count=0;long long number=1;
		while(n/2>0)
		{
			count++;
			n=n/2;
			number=number*2;
		}
		cout<<number*2-1;
	}
	return 0;
}