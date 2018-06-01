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
vi adj[100001];
int dist[100001];
bool vis[100001];
map<int,int> m;
void bfs(int i)
{
	queue<int> q;
	q.push(i);
	dist[i]=0;
	vis[i]=true;
	while(!q.empty())
	{
		int temp=q.front();
		q.pop();
		for(auto x:adj[temp])
		{
			if(!vis[x])
			{
				vis[x]=true;
				dist[x]=dist[temp]+1;
				q.push(x);
			}
		}
	}
}
charan
{
	fast;
	int n,u;
	cin>>n;
	ms0(vis,100001,false);
	ms0(dist,100001,0);
	for(int i=1;i<=n-1;i++)
	{
		cin>>u;
		adj[u].pb(i+1);
		adj[i+1].pb(u);
	}
	bfs(1);
	for(int i=2;i<=n;i++)
	{
		//cout<<i<<" "<<dist[i]<<endl;
		m[dist[i]]++;
	}
	int ans=1;
	for(auto x:m)
	{
		if(x.ss%2==1)
			ans++;
	}
	cout<<ans;
	return 0;
}