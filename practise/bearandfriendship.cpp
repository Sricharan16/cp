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
vi adj[150001];
ll x,y;
bool check[150001];
bool checkedge(int i,int j)
{
	if(j==-1)
		return 1; 
	else
	{
		for(int k=0;k<adj[i].size();k++)
		{
			//cout<<"from here"<<adj[i][k]<<" "<<j<<endl;
			if(j==adj[i][k])
				return 1;
		}
		return 0;
	}
}
void DFS(int i,int x){
	cout<<"#"<<i<<" "<<x<<endl;

		check[i]=true;
		for(int j=0;j<adj[i].size();j++)
		{
			if(check[adj[i][j]]==false)
			{
				//cout<<"##"<<adj[i][j]<<" "<<x<<endl;
				if(checkedge(adj[i][j],i))
				DFS(adj[i][j],i);
				else
				{
					//cout<<"######"<<adj[i][j]<<" "<<x<<endl;
					cout<<"NO";
					exit(0);
				}
			}
		}
	
}
charan
{
	fast;
	ll n,m;
	cin>>n>>m;
	ms0(check,false);
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i=1;i<=n;i++)
	{
		ms0(check,false);
		// for(int j=0;j<adj[1].size();j++)
		// {
		// 	cout<<adj[1][j]<<" ";
		// }cout<<endl;
		DFS(i,-1);
	
	}
	cout<<"YES";
	return 0;
}