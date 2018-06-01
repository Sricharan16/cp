#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans[10000001];
ll factors[10000001];
bool prime[10000001];
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define min(x,y) ((x>y)?(y):(x))
void seive()
{
	for(int i=2;i*i<=10000000;i++)
	{
		if(prime[i]==true)
			for(int j=2*i;j<=10000000;j+=i)
			{
				prime[j]=false;
				if(factors[j]==j)
					factors[j]=i;
			}
	}
} 
int main()
{
	fast;
	for(int i=1;i<=10000000;i++)
	{
		prime[i]=true;
		ans[i]=0;
		factors[i]=i;
	}
	prime[1]=false;
	ll x;
	ll n;
	cin>>n;
	seive();
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		while(x!=1)
		{
			int temp=factors[x];
			ans[temp]++;
			while(x%temp==0)
			{
				x=x/temp;
			}
			
		}
	}
	// for(int i=1;i<=15;i++)
	// {
	// 	cout<<i<<ans[i]<<endl;
	// }
	for(int i=2;i<=10000000;i++)
	{
		ans[i]+=ans[i-1];
	}
	ll m;
	cin>>m;
	ll y;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		cout<<ans[min(y,10000000)]-ans[min(x-1,10000000)]<<"\n";
	}

	return 0;
}