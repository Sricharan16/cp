#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;cin>>n>>k;
	if(k==0)
	{
		cout<<"0 0";
		return 0;
	}
	if(n==k){
		cout<<"0 0";
		return 0;
	}
	else 
	{
		cout<<"1 ";
	}
	if(2*k+1<=n)
		cout<<k+1;
	else
		cout<<n-k;
	return 0;
}