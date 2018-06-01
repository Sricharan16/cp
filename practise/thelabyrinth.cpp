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
ll p=0;
char arr[1001][1001];
int ans[1001][1001];
bool vis[1001][1001];
vector<pii> v;
ll n,m;
void dfs(int i,int j,int x,int y)
{
	if(arr[i][j]=='*')
		return;
	if(!vis[i][j])
	{
		vis[i][j]=true;
		p++;
		v.pb(mp(i,j));
		if(i+1<=n && !(i+1==x && j==y))
			dfs(i+1,j,i,j);
		if(j+1<=m && !(i==x && j+1==y))
			dfs(i,j+1,i,j);
		if(i-1>=1 && !(i-1==x && j==y))
			dfs(i-1,j,i,j);
		if(j-1>=1 && !(i==x && j-1==y))
			dfs(i,j-1,i,j);
	}
}
charan
{
	fast;
	
	cin>>n>>m;
	string str;
	int idx=1;
	map<int,int> x;
	for(int i=1;i<=n;i++)
	{
		cin>>str;
		for(int j=0;j<str.length();j++)
		{
			vis[i][j+1]=false;
			ans[i][j+1]=0;
			arr[i][j+1]=str[j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(!vis[i][j])
			{
				p=0;
				dfs(i,j,-1,-1);
				for(int k=0;k<v.size();k++)
				{
					ans[v[k].ff][v[k].ss]=idx;
				}
				x[idx]=p;
				idx++;
				v.clear();
			}
		}
	}
	 // for(int i=1;i<=n;i++)
  //   {
  //       for(int j=1;j<=m;j++)
  //       {
  //           cout<<ans[i][j];
  //       }
  //       cout<<endl;
  //   }
	set<int> s;
	set<int>::iterator it;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(arr[i][j]=='*')
			{
				p=0;
				if(i+1<=n)
					s.insert(ans[i+1][j]);
				if(j+1<=m)
					s.insert(ans[i][j+1]);
				if(i-1>=1)
					s.insert(ans[i-1][j]);
				if(j-1>=1)
					s.insert(ans[i][j-1]);
				for(it=s.begin();it!=s.end();it++)
					p+=x[*it];
				cout<<(p+1)%10;
				s.clear();
			}
			else
				cout<<arr[i][j];
			
		}
		cout<<endl;
	}
	return 0;
}