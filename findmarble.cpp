#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;int s,t;cin>>n>>s>>t;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
		int count=0;int p=s;int j;
	if(s==t)
	{
		cout<<"0";
		return 0;
	}
	while(count<n+1){
		count++;
		j=a[p];
		p=j;
		if(j==t)
		{
			cout<<count;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}