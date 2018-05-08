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
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
bool visited[2005]={false};
vi adj[2005];
int root[2005]={0};
int c=0;
int s=0;
void DFS(int i,int t){
	if(visited[i]==true)
		return;
	else{
		//c++;
		//t=s;
		t++;
		//c=c-(adj[i].size()-1);
		//cout<<"#"<<i<<" "<<t<<endl;
		visited[i]=true;int flags=0;
		for(int j=0;j<adj[i].size();j++)
		{
			//c++;
			//cout<<adj[i][j]<<" ";
			// if(flags==0)
			// 	{c++;flags=1;}
			DFS(adj[i][j],t);
			// if(flags==0)
			// {
			// 	c++;flags=1;
			// }
		}
		s=max(s,t);
	}
}
charan
{
	fast;
	int n;cin>>n;
int x;
	rep(i,n){
		cin>>x;
		if(x!=-1)
		adj[x].pb(i+1);
	else
		root[i+1]=1;
		//adj[i+1].pb(x);
	}
	// cout<<endl;
	// for(int i=0;i<adj[1].size();i++){
	// 	cout<<adj[1][i]<<"!!";
	// }cout<<endl;
	int maxi=0;
	f(i,1,n+1){
		if(visited[i]==false && root[i]==1)
		{
			c=1;
			s=0;
			DFS(i,0);
			//cout<<i<<" "<<c<<endl;
			//cout<<s<<endl;
			maxi=max(s,maxi);
		}
	}
	cout<<maxi;

	return 0;
}