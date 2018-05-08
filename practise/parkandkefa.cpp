#include<bits/stdc++.h>
using namespace std;
bool flags[100005]={false};
int cats[100005]={0};
int counti[100005]={0};
vector <int> adj[100005];
int res=0;
void DFS(int i,int s,int m){
	//cout<<"#"<<i<<endl;
	if(cats[i]==1){
		//cout<<"###"<<i<<" s"<<s<<endl;
		s++;
		//cout<<"after###"<<i<<" s"<<s<<endl;
	}
	else
		s=0;
	if(flags[i]==true){
		return;
	}
	flags[i]=true;
	for(int j=0;j<adj[i].size();j++)
	{
	if(flags[adj[i][j]]==false)
	{
  
		if(s<=m)
		{
			//cout<<"CALLING DFS"<<" "<<adj[i][j]<<" "<<"s "<<s;
			DFS(adj[i][j],s,m);
			
		}
		
	}

   }
	if(adj[i].size()==1 && s<=m && i!=1){
				//cout<<"##"<<i<<" "<<"s "<<s<<endl;
				res++;
			}
}
int main(int argc, char const *argv[])
{
	int n,m;cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>cats[i];
	}
	int x,y;
	for(int i=1;i<n;i++){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	//counti[1]=cats[1];
	DFS(1,0,m);//int kl=0;
	// for(int i=2;i<=n;i++){
	// 	cout<<i<<" "<<counti[i]<<" "<<endl;
	// 	if(adj[i].size()==1 && counti[i]<=m)
	// 		kl++;
	// }
	cout<<res;
	return 0;
}