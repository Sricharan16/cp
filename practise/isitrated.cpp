#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;int x,y;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if(x!=y){
			cout<<"rated";
			return 0;
		}
		a[i]=x;
		b[i]=a[i];

	}
	sort(b,b+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[n-1-i])
		{
			cout<<"unrated";
			return 0;
		}
	}
	cout<<"maybe";
	return 0;
}