#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;int m;cin>>m;int x,y; float mini=99999999999.99999;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		float den=(float)x/y;
		mini=min(mini,den);
	}
	cout<<setprecision(10)<<mini*m;
	return 0;
}