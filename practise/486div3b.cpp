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
map<int,string> x;
int vis[100][100];
bool isSubSequence(string str1,string str2, int m, int n)
{
   int j = 0; 
   for (int i=0; i<n&&j<m; i++)
       if (str1[j] == str2[i])
         j++;
   return (j==m);
}
class Graph
{
    int V; 
    list<int> *adj;
 
public:
    Graph(int V);
    void addEdge(int u, int v);
    void topologicalSort();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int u, int v)
{
	if(vis[u][v]==0 && u!=v)
	{
		//cout<<u+1<<" "<<v+1<<endl;
    adj[u].push_back(v);
    vis[u][v]=1;
	}
}
void Graph::topologicalSort()
{
    vector<int> in_degree(V, 0);
    for (int u=0; u<V; u++)
    {
        list<int>::iterator itr;
        for (itr = adj[u].begin(); itr != adj[u].end(); itr++)
             in_degree[*itr]++;
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
        if (in_degree[i] == 0)
            q.push(i);
    int cnt = 0;
    vector <int> top_order;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        top_order.push_back(u);
        list<int>::iterator itr;
        for (itr = adj[u].begin(); itr != adj[u].end(); itr++)
            if (--in_degree[*itr] == 0)
                q.push(*itr);
 
        cnt++;
    }
    if (cnt != V)
    {
        cout << "NO\n";
        return;
    }
 
    cout<<"YES"<<endl;
    for (int i=0; i<top_order.size(); i++)
        cout << x[top_order[i]+1] <<endl;
}
charan
{
	fast;
		for(int i=0;i<100;i++)
			for(int j=0;j<100;j++)
				vis[i][j]=0;
		int n;
		cin>>n;
		Graph g(n);
		
		string str;
		string s[101];
		for(int i=1;i<=n;i++)
		{
			cin>>str;
			x[i]=str;
			s[i]=str;
		}	
		int counti=0;
		for(int i=1;i<=n;i++)
		{
			counti=0;
			for(int j=1;j<=n;j++)
			{

			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(s[j].find(s[i]) != std::string::npos && s[i]!=s[j] && i!=j)
				{
					g.addEdge(i-1,j-1);
				}
				else if(s[i]!=s[j] && i!=j && !s[j].find(s[i]) != std::string::npos)
				{
					g.addEdge(j-1,i-1);
				}
				if(s[i].find(s[j]) != std::string::npos && s[i]!=s[j] && i!=j)
				{
					g.addEdge(j-1,i-1);
				}
				else if(s[i]!=s[j] && i!=j && !s[i].find(s[j]) != std::string::npos)
				{
					g.addEdge(i-1,j-1);
				}
				if(s[i]==s[j] && i>j)
				{
					g.addEdge(i-1,j-1);
				}

			}
		}
	  g.topologicalSort();


	return 0;
}