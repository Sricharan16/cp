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
bool vis[1001];
vi adj[1001];
ll v=0;
ll e=0;
void dfs(int i)
{
	if(!vis[i])
	{
		vis[i]=true;
		v++;
		e+=adj[i].size();
		for(auto x:adj[i])
		{
			if(!vis[x])
				dfs(x);
		}
	}
}
charan
{
	fast;
	ll n,m,k;
	cin>>n>>m>>k;
	ll x,y;
	ms0(vis,1001,false);
	int krr[k+1];
	for(int i=1;i<=k;i++)
	{
		cin>>krr[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ll ans=0;
	int maxv=0;
	for(int i=1;i<=k;i++)
		{
			e=0;
			v=0;
				dfs(krr[i]);
				ans+=((v*(v-1)/2)-(e/2));
				maxv=max(v,maxv);
		}
		for(int i=1;i<=n;i++)
		{
			if(!vis[i])
			{
				v=0;e=0;
				dfs(i);
				ans+=(maxv*v+(v*(v-1)/2-e/2));
				maxv+=v;
			}
		}
		cout<<ans;
	return 0;
}