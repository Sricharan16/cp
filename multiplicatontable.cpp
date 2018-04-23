#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(int argc, char const *argv[])
{
	ll n,x;
	cin>>n>>x;int count=0;
	for (int i = 1; i < n+1; ++i)
	{
		/* code */if(x%i==0 && (x/i)<=n)
		count++;
	}cout<<count;
	return 0;
}