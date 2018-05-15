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
vi adj[100001];
bool visited[100001];
int flags =0 ;
char colour[100001];
void DFS(int i,char a)
{
	visited[i]=true;
	colour[i]=a;
	for(int j=0;j<adj[i].size();j++)
	{
		if(visited[adj[i][j]]==false)
		{
			if(colour[i]=='r')
				DFS(adj[i][j],'b');
			else
				DFS(adj[i][j],'r');
		}
		else
		{
			//cout<<colour[adj[i][j]]<<endl;
			if(colour[adj[i][j]]==colour[i])
			{
				cout<<"-1";
				exit(0);
			}
		}
	}
}
charan
{
	fast;
	ll n,m;ll u,v;
	cin>>n>>m;
	ms0(colour,'r');
	ms0(visited,false);
	for(int i=1;i<=m;i++)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==false)
			DFS(i,'r');
	}
	int count0=0,count1=0;
	 for(int i=1;i<=n;i++)
	{
		if(colour[i]=='r')
			count0++;
		else 
			count1++;
	}
	cout<<count0<<endl;
	 for(int i=1;i<=n;i++)
	{
		if(colour[i]=='r')
			cout<<i<<" ";
	} 
	cout<<endl;
	cout<<count1<<endl;

	for(int i=1;i<=n;i++)
	{
		if(colour[i]=='b')
			cout<<i<<" ";
	}
	return 0;
}