/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define ff first
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
ll n,k,d;
ll dp[101];
ll sol[101];
int sum=0;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	cin>>n>>k>>d;
	
	ms0(dp,0);
	//ms0(sol,0);
	//dp[0][1]=1;//second 1 for showing that edge contains a d;
	dp[0]=1;
	sol[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			
			if(i-j>=0)
				{
					dp[i]=(dp[i]+dp[i-j])%mod;
				}
	
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=d-1;j++)
		{
			
			if(i-j>=0)
				{
					sol[i]=(sol[i]+sol[i-j])%mod;
				}
	
		}
	}
	cout<<(dp[n]-sol[n]+mod)%mod;
	return 0;
}