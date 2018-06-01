#include<bits/stdc++.h>
using namespace std;
#define min(a,b) ((a>b)?(b):(a))
#define max(a,b) ((a>b)?(a):(b))
int main()
{
	long long x,y,p,q,k;
	cin>>x>>y>>p>>q>>k;
	long long ans=min(y,q)-max(x,p)+1;
	if(k>=max(x,p) && k<=min(y,q))
		ans--;
	if(ans<0)
		ans=0;
	cout<<ans;
	return 0;
}