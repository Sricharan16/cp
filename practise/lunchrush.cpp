#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n,k;cin>>n>>k;
	long long x,y,maxi=-999999999;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		if(y>k)
		{
			maxi=max(maxi,x-y+k);
		}
		else
		{
			maxi=max(maxi,x);
		}
	}
	cout<<maxi;
	return 0;
}