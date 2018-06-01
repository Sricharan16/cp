#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y,z,ans=1;
	cin>>x>>y>>z;
	ans=sqrt(x*y/z)+sqrt(z*y/x)+sqrt(x*z/y);
	cout<<ans*4;

	return 0;
}