#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int previous=a[1];int count=1;int lis=0;
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	for(int i=2;i<=n;i++){
		if(a[i]<=previous)
		{
			count=1;

		}
		if(a[i]>previous)
		{
			count++;
		}
		lis=max(lis,count);
		previous=a[i];
	}
	cout<<lis;
	return 0;
}