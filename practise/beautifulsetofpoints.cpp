#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans[10000001];
ll factors[10000001];
bool prime[10000001];
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
	for(int i=1;i<=15;i++)
	{
		cout<<i<<ans[i]<<endl;
	}
	for(int i=2;i<=10000000;i++)
	{
		ans[i]+=ans[i-1];
	}

	return 0;
}