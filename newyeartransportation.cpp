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
	cin.tie(NULL);
	ll n,t;cin>>n>>t;ll A[n];ll p;
	for(int i=1;i<=n-1;i++)
	{
		cin>>p;
		A[i]=i+p;
	}
	ll current=1;
	//cout<<A[1];
	for(int i=1;i<=n-1;i++)
	{
		current=A[current];
			if(current==t)
				{cout<<"YES";return 0;}
			else if(current>t)
			{
				cout<<"NO";
				return 0;
			}

	}cout<<"NO";
	return 0;
}