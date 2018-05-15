/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define tri pair<int,pii>
#define mod (1000*1000*1000+7)
#define moddd (1000*1000*1000+9)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair< ll,ll >
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vector <int>,greater< int > >
#define ff first
#define ss second
#define min(a,b) ((a<b)?(a):(b))
#define max(a,b) ((a>b)?(a):(b))
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);
ll dp[2001][2001];
vi factors[2001];
void factorization(int i)
{
	for(int j=1;j<=sqrt(i);j++)
	{
		if(i%j==0)
		{
			factors[i].pb(j);
			if(i/j!=j)
				factors[i].pb(i/j);
		}
	}
}
charan
{
	fast;
	ms0(dp,0);
	ll n,k;//dp[i][j] represents no of good sequences of length i ending in number j
	cin>>n>>k;
	//n=max(n,k);
	for(int i=1;i<=max(n,k);i++)
	{
		dp[i][1]=1;
		dp[1][i]=1;
		factorization(i);
	}
	//dp[i][j]= sum dp[i-1][x] such that x is a factor of j
	for(int i=2;i<=k;i++)
	{
		for(int p=2;p<=n;p++)
		for(int j=0;j<factors[p].size();j++)
		{
			dp[i][p]=(dp[i-1][factors[p][j]]+dp[i][p])%mod;
		}
	}
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		ans=(ans+dp[k][i])%mod;
		//gdb(ans);
	}
	// for(int i=1;i<=max(n,k);i++)
	// {
	// 	for(int j=1;j<=max(n,k);j++)
	// 		cout<<dp[i][j]<<" ";
	// 	cout<<endl<<"#";
	// }
	cout<<ans%mod;
	return 0;
}