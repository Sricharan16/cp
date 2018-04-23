/*I shall rise*/
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>b;i--)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);int k;cin>>k;int a[12];
	f(i,0,12)cin>>a[i]; sort(a,a+12);
	int sum=0;
	if(sum==k)
		{cout<<"0";return 0;}
	fd(i,12-1,-1)
	{
		sum=sum+a[i];
		if(sum>=k)
			{cout<<12-i;return 0;}
	}
	cout<<"-1";
	return 0;
}