
/*I shall rise*/
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define vitr vector<int>::iterator 
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
/*charan007*/
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>b;i--)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
#define max(a,b) ((a>b)? (a):(b))
vi adj[200005];
bool visited[200005]={false};
int colour[200005]={0};
void DFS(int i,int p,int k){
	if(visited[i]==true)
		return;
	else{
		//vitr j;
		//colorofparent=colour[parent];
		visited[i]=true;
		// int pi;
		// for(pi=1;pi<=z;pi++){
		// 	if(pi!=cc && pi!=colour[parent]){
		// 		colour[i]=pi;
		// 		//break;
		// 		cout<<"color is "<<pi<<endl;
		// 			break;		}
					
		// }cc=pi;
		//cout<<i<<" "<<"current color"<<cc<<" parent "<<colour[parent]<<" "<<endl;
		int pi=1;
		for(vitr j=adj[i].begin();j<adj[i].end();j++){
			
			
			if(visited[*j]==false){
				for(;pi<=k;pi++)
			{
				if(pi!=colour[i] && pi!=colour[p])
					break;
			}
			colour[*j]=pi;
			//cout<<"color of "<<*j<<" "<<pi<<endl;
			pi++;
				DFS(*j,i,k);
			}
		}

	}

}
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;cin>>n;
 ll x,y;
	f(i,1,n){
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ll z=0;
	f(i,1,n+1){
		z=max(z,adj[i].size()+1);
	}
	colour[1]=1;
	DFS(1,0,z);
	cout<<z<<endl;
	f(i,1,n+1)cout<<colour[i]<<" ";
}