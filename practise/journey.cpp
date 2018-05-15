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
bool visited[100001];
long double p[100001];
ll dist[100001];
vi adj[100001];
void bfs(int i)
{
	queue <int> q;
	q.push(i);
	visited[i]=true;
	while(!q.empty())
	{
		int temp=q.front();
		q.pop();
		int count=0;
		for(int j=0;j<adj[temp].size();j++)
		if(visited[adj[temp][j]]==false)
				count++;
		for(int i=0;i<adj[temp].size();i++)
		{
			if(visited[adj[temp][i]]==false)
			{
				dist[adj[temp][i]]=dist[temp]+1;
				
			// 	if(adj[temp].size()!=1)
			// 	p[adj[temp][i]]=p[temp]/(adj[temp].size()-1);
			// else
				p[adj[temp][i]]=p[temp]/count;
				visited[adj[temp][i]]=true;
				q.push(adj[temp][i]);
			}
		}
	}
}
charan
{
	fast;
	ll n;cin>>n;
	ll x,y;
	for(int i=1;i<=n-1;i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ms0(visited,false);
	ms0(dist,0);
	dist[1]=0;
	p[1]=1;
	bfs(1);
	ll count=0;
	long double sum=0;//for(int i=1;i<=n;i++)cout<<"p["<<i<<"]"<<p[i]<<" "<<dist[i]<<endl;
	for(int i=2;i<=n;i++)
	{
		if(adj[i].size()==1)
		{
			//count++;
			//cout<<i<<endl;
			sum+=((1.0*dist[i])*p[i]);
			//cout<<"sum "<<sum;
		}
	}
	// for(int i=1;i<=n;i++)
	// 	cout<<"dist["<<i<<"]"<<" "<<dist[i]<<endl;
	// cout<<sum<<" count"<<count;
	cout<<fixed<<setprecision(9)<<sum;
	return 0;
}