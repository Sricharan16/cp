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
charan
{
	fast;
	ll n;cin>>n;
	int dp[n+1][3];
	ms0(dp,0);
	ll x;
	//counting the maximum number of days player will not take rest
	for(int i=1;i<=n;i++)
	{
		//1 means contest
		//2 means gym
		cin>>x;
		dp[0][i]=max(dp[0][i-1],max(dp[1][i-1],dp[2][i-1]));
		if(x==1)
		{
			dp[1][i]=max(dp[0][i-1],dp[2][i-1])+1;
		}
		else if(x==2)
		{
			dp[2][i]=max(dp[0][i-1],dp[1][i-1])+1;
		}
		else if(x==3)
		{
			dp[1][i]=max(dp[0][i-1],dp[2][i-1])+1;
			dp[2][i]=max(dp[0][i-1],dp[1][i-1])+1;
		}
	}
	//cout<<dp[2][4]<<" "<<dp[1][4]<<" "<<dp[0][4]<<endl;
	int maxi=max(dp[1][n],dp[2][n]);
	cout<<n-max(dp[0][n],maxi);
	return 0;
}