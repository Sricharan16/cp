/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
int main()
{
	fast;
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i <=n;i++)
		cin>>arr[i];
	int inv=0;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
		{
			if(arr[j]<arr[i])
				inv++;
		}
	int m;
	cin>>m;
	int l,r;
	//string str;
	inv%=2;
	for(int i=1;i<=m;i++)
	{
		cin>>l>>r;
		int swaps=(r-l+1)*(r-l)/2;
		if(swaps%2==1)
		{
			inv++;
		}
		if(inv%2)
			cout<<"odd"<<"\n";
		else
			cout<<"even"<<"\n";

	}
	return 0;
}