/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define ff first
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,m;cin>>n>>m;ll x,y;
	vector <pii> adj;
	vector <pii> ene;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		adj.pb(mp(x,i));
		ene.pb(mp(x,i));
	}
	sort(adj.rbegin(),adj.rend());	
	ll energy=0;
	vi edges[n+1];
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		edges[x].pb(y);
		edges[y].pb(x);
	}
	for(int i=1;i<=n-1;i++){
		//cout<<adj[i-1].ss<<endl;
		int u=adj[i-1].ss;
		for(int j=0;j<edges[u].size();j++){
			energy+=ene[edges[u][j]-1].ff;
		}
		//cout<<energy<<"#"<<endl;
		ene[u-1].ff=0;
	}
	cout<<energy;
	return 0;
}