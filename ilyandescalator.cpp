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
long double dp[2005][2005];
charan
{
	fast;
	ll n,t;
	long double p;cin>>n>>p>>t;
	//dp[i][j] j sec left with i person being at the first one in the queue
	//dp[i][0] means i-1 people are at the esclatlaroe
	//dp[n+1][t] means n people are at escalator  
	//dp[i][t]=p*dp[i+1][t-1]+(1-p)*dp[i][t-1];
	ms0(dp,0);
	for(int i=1;i<=n;i++)
	{
		dp[i][0]=i-1;

	}
	for(int i=1;i<=n;i++)
	{
		if(i>n)
			for(int j=1;j<=t;j++){
				dp[i][j]=n;
			}
	}
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=t;k++)
		{
			dp[i][t]+=p*dp[i+1][t-1]+(1-p)*dp[i][t-1];
		}

	}
	for(int i=1;i<=n;i++){
       cout<<dp[i][t]<<endl;
    }
	cout<<dp[n][t];
	return 0;
}