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
vi adj[300001];
bool v[300001];
//bool past[300001];
ll sum=0;
void dfs(int i,int k)
{
 if(v[i]==true)
 	return;
 else
 {
 	v[i]=true;
 	sum++;
 	for(auto j:adj[i])
 		if(!v[j] && j!=k)
 			{
 				dfs(j,k);
 			}
 }
}
void parent(int i,int p)
{
	if(v[i]==true)
		return;
	else
	{
		//cout<<i<<"###"<<endl;
		v[i]=true;
		for(auto j:adj[i])
			if(!v[j])
			{
				if(j==p)
					sum=i;
				parent(j,p);
			}
	}
}
charan
{
	fast;
	ll n,x,y;cin>>n>>x>>y;
	ll a,b;
	ll belowxvalue=0;
	ms0(v,300001,false);
	for(int i=1;i<=n-1;i++)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	sum=0;
	parent(x,y);
	ll z=sum;
	ms0(v,300001,false);
	sum=0;
	parent(y,x);
	ll above=sum;
	sum=0;
	ms0(v,300001,false);
	dfs(x,above);
	belowxvalue=sum;
	sum=0;
	dfs(y,z);
	ll abovexvalue=sum;
	 cout<<n*(n-1)-(belowxvalue*abovexvalue);

	return 0;
}