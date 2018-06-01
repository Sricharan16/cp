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
#define ms0(x,n,a) fill_n(x, n, a)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);
const ll mod=1e9+7;
const ll med=1e9+9;
//change mod or med accordingly whenever necessary carefulwith mod!!!!!
inline ll add(ll x,ll y){ x += y; if(x >= mod) x -= mod; return x;}
inline ll sub(ll x,ll y){ x -= y; if(x < 0) x += mod; return x;}
inline ll mul(ll x,ll y){ return (x * 1ll * y) % mod;}
ll power(ll x,ll y){
    if(y==0)return 1;
    if(y==1)return x;
    ll ans=power(x,y/2)%mod;
    ans*=ans;
    ans%=mod;
    if(y%2)ans*=x;
    return ans%mod;
}
ll inv(ll x,ll y){
    x+=mod;y+=mod;
    x%=mod;y%=mod;
    ll ret=(power(y,mod-2)%mod)*x;
    return (ret%mod);
}
charan
{
	fast;
	ll n,k;
	cin>>n>>k;
	string str;
	cin>>str;
	int dp[n+1][2];
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=dp[i][1]=0;
	}
	for(int i=0;i<n;i++)
	{
		dp[i+1][0]=dp[i][0];
		dp[i+1][1]=dp[i][1];
		dp[i+1][str[i]-'a']++;
	}
	// for(int i=1;i<=n;i++)
	// 	cout<<dp[i][0]<<" ";
	// cout<<endl;
	// for(int i=1;i<=n;i++)
	// 	cout<<dp[i][1]<<" ";
	// cout<<endl;
	int j=0;
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		while(dp[i][0]-dp[j][0]>k && j<=n)
		{
			j++;
		}
		//cout<<j<<" "<<i<<endl;
		ans=max(ans,i-j);
	}
	cout<<ans<<endl;
	j=0;
	//cout<<"##";
	for(int i=1;i<=n;i++)
	{
		while(dp[i][1]-dp[j][1]>k && j<=n)
		{
			j++;
		}
		//gdb(dp[6][1]-dp[2][1]);
		//cout<<j<<" "<<i<<endl;
		ans=max(ans,i-j);
	}
	cout<<ans;
	return 0;
}