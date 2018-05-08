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
vi adj[1001];
ll dists[1001];
bool visited[1001];
ll distt[1001];
void sbfs(int i)
{
	dists[i]=0;
	queue<int> q;
	q.push(i);
	visited[i]=true;
	while(!q.empty())
	{
		int f= q.front();
		q.pop();
		for(int i=0;i<adj[f].size();i++)
		{
			if(visited[adj[f][i]]==false)
			{
			visited[adj[f][i]]=true;
			dists[adj[f][i]]=dists[f]+1;
			q.push(adj[f][i]);
			}
		}
	}
}
void tbfs(int i)
{
	distt[i]=0;
	queue<int> q;
	q.push(i);
	visited[i]=true;
	while(!q.empty())
	{
		int f= q.front();
		q.pop();
		for(int i=0;i<adj[f].size();i++)
		{
			if(visited[adj[f][i]]==false)
			{
			visited[adj[f][i]]=true;
			distt[adj[f][i]]=distt[f]+1;
			q.push(adj[f][i]);
			}
		}
	}
}
charan
{
	fast;
	ll n,m,s,t;cin>>n>>m>>s>>t;
	ll x,y;
	ms0(distt,0);
	ms0(dists,0);
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ms0(visited,false);
	sbfs(s);
	ms0(visited,false);
	tbfs(t);
	ll D=dists[t];
	ll count=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(std::find(adj[i].begin(), adj[i].end(), j) != adj[i].end() ) 
			{
			} else 
			{
				if(dists[i]+distt[j]+1>=D && dists[j]+distt[i]+1>=D)
			    {
			    	
			    	count++;
			    }
			}
		}
	}
	cout<<count;
	return 0;
}