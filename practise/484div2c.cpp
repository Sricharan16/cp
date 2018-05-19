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
#define ms0(x,n,a) fill_n(x, n, a)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);
vi adj[100001];
ll deg[100001];
charan
{
	fast;
	ll  n;
	cin>>n;
	ll x,y;//cin>>x>>y;
	vector<tri> edj;
	for(int i=1;i<=n-1;i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
		edj.pb(mp(0,mp(x,y)));
	}
	ll count=0;
	for(int i=1;i<=n;i++)
	{
		deg[i]=adj[i].size();
	}
	//sort(deg+1,deg+n+1,greater< pii >());
	for(int i=0;i<edj.size();i++)
	{
		edj[i].ff=deg[edj[i].ss.ff]+deg[edj[i].ss.ss];
	}
	sort(edj.begin(),edj.end(),greater<tri>());
	for(int i=0;i<edj.size();i++)
	{
		if(deg[edj[i].ss.ff]>=2 && deg[edj[i].ss.ss]>=2)
		{
			cout<<edj[i].ss.ff<<" "<<edj[i].ss.ss<<endl;
			deg[edj[i].ss.ff]--;
			deg[edj[i].ss.ss]--;
			count++;
		}
	}
	if(count==0)
	{
		//cout<<"-1";
		if(n%2==0)
		cout<<"0";
		else
			cout<<"-1";
	}
	else
		cout<<count;
	return 0;
}