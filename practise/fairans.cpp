#include<bits/stdc++.h>
using namespace std;
const int inf=100020;
int type[100001];
int dist[100001];
vector<int> adj[100001];
vector<int> goods[100001];
int main(int argc, char const *argv[])
{
	int n,m,k,s;
	int u,v;
	cin>>n>>m>>k>>s;
	for (int i=1 ; i <= n; i++ )
		cin >> type[i];
	for ( int i=1; i <= m; i++ )
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=1;i<=k;i++)
	{
		queue<int> q;
		for(int j=1;j<=n;j++)
		{
			if(type[j]!=i)
			dist[j]=inf;
			else
			{
				dist[j]=0;
				q.push(j);
			}
		}
		while(!q.empty())
		{
			int temp=q.front();
			q.pop();
			for(auto x:adj[temp])
			{
				if(dist[x]==inf)
				{
					dist[x]=dist[temp]+1;
					q.push(x);
				}
			}
		}
		for(int j=1;j<=n;j++)
			goods[j].push_back(dist[j]);

	}
	for(int i=1;i<=n;i++)
	{
		int p=0;
		sort(goods[i].begin(),goods[i].end());
		for(int j=0;j<s;j++)
			p+=goods[i][j];
		cout<<p<<" ";
	}
	return 0;
}