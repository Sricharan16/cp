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
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
#define min(a,b) ((a)<(b))? a:b
#define MAX 9999999999
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
bool visited[100005]={false};
vi adj[100005];
ll arr[100005];
ll mini=9999999999;
void DFS(int i){
	//<<mini<<endl;
	if(visited[i]==true){
		return ;
	}
	else{

		visited[i]=true;
		mini=min(mini,arr[i]);
		
		for(int j=0;j<adj[i].size();j++){
			if(visited[adj[i][j]]==false)
			{
				DFS(adj[i][j]);
			}
		}
		//return mini;
		//cout<<"#"<<i<<" "<<mini<<endl;
	}
	//return mini;
}
charan
{
	fast;
	ll n;cin>>n; ll q;
	cin>>q;
	rep(i,n)cin>>arr[i+1]; ll x,y;
	while(q--){
		cin>>x>>y;
		//cout<<x<<y<<endl;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	
	ll sum=0;
	rep(i,n){
		if(visited[i+1]==false){
			mini=9999999999;
			DFS(i+1);
			sum+=mini;
			//cout<<"finished"<<endl;
		}
	}
	cout<<sum;
	return 0;
}
