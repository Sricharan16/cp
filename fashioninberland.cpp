#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;int a[n];int count=0;
	if(n==1){
		cin>>a[0];
		if(a[0]==0)
			cout<<"NO";
		else
			cout<<"YES";
		return 0;
	}int flags=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(a[i]==0 )
			count++;
	}
	if(count>1)
		cout<<"NO";
	else if(count==1 && a[n-1]==0)
		cout<<"NO";
	else if(count==1 && a[n-1]!=0)
		cout<<"YES";
	else
		cout<<"YES";
	return 0;
}