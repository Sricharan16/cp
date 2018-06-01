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
ll ans=0;
vector<pii> v;
char arr[1001][1001];
bool vis[1001][1001];
ll n,m,k;
int sol[1001][1001];
void dfs(int i,int j,int x,int y)
{
	if(vis[i][j]==true || arr[i][j]=='*')
		return ;
	else
	{
		vis[i][j]=true;
		v.pb(mp(i,j));
		if(i+1<=n)
		{
			if((arr[i][j]=='.'&& arr[i+1][j]=='*'))
				ans++;
		}
		if(j+1<=m)
		{
			if((arr[i][j]=='.'&& arr[i][j+1]=='*'))
				ans++;
		}
		if(i-1>=1)
		{
			if((arr[i][j]=='.'&& arr[i-1][j]=='*'))
				ans++;
		}
		if(j-1>=1)
		{
			if((arr[i][j]=='.'&& arr[i][j-1]=='*'))
				ans++;
		}

		if(i+1<=n && !(x==i+1 && y==j))
		{
			if(arr[i+1][j]!='*')
				dfs(i+1,j,i,j);
		}
		if(j+1<=m && !(x==i && y==j+1))
		{
			if(arr[i][j+1]!='*')
				dfs(i,j+1,i,j);
		}
		if(i-1>=1 && !(x==i-1 && y==j))
		{
			if(arr[i-1][j]!='*')
				dfs(i-1,j,i,j);
		}
		if(j-1>=1 && !(x==i && y==j-1))
		{
			if(arr[i][j-1]!='*')
				dfs(i,j-1,i,j);
		}
	}
}
charan
{
	fast;
	cin>>n>>m>>k;
	string str;
	for(int i=1;i<=1000;i++)
		for(int j=1;j<=1000;j++)
			{vis[i][j]=false;sol[i][j]=0;}
	for(int i=1;i<=n;i++)
	{
		cin>>str;
		for(int j=0;j<str.length();j++)
		{
			arr[i][j+1]=str[j];
		}
	}
	pii brr[k+1];
	for(int i=1;i<=k;i++)
	{
		cin>>brr[i].ff>>brr[i].ss;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(arr[i][j]=='.' && vis[i][j]==false)
			{
				ans=0;
				dfs(i,j,-1,-1);
				for(int k=0;k<v.size();k++)
				{
					sol[v[k].ff][v[k].ss]=ans;
				}
				v.clear();
			}
		}
	}
	for(int i=1;i<=k;i++)
	{
		cout<<sol[brr[i].ff][brr[i].ss]<<endl;
	}
	return 0;
}