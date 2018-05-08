#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;	cin>>n;
	int mini=0;int t;
	for (int i = 0; i < n; ++i)
	{
		cin>>t;
		mini=max(mini,min(1000000-t,t-1));
	}
	cout<<mini;
		return 0;
}