#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector <int> parent[1001];
vector <int> child[1001];
int nonleaf[1001];
void DFS(int n, int& x)
{
	//cout<<"1";
	 vector <int> :: iterator i;
	 int count=0;
	 for (i = child[n].begin(); i != child[n].end(); ++i)
	 {
	 	if(child[*i].size()==0)
	 		count++;
	 }
	 nonleaf[n]=(count);
	for (i = child[n].begin(); i != child[n].end(); ++i)
	{
		//cout<< *i <<" "<<endl;
		if(child[*i].size()==0)
		{int k=parent[*i][0];
			if(nonleaf[k]<3)
			{
				x=1;
			}
		}
		else
			DFS(*i,x);

	}
}
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n;
	for (int i = 1; i < n; ++i)
	{
		cin>>k;
		parent[i+1].push_back(k);
		child[k].push_back(i+1);

	}
	int x=0;
	DFS(1,x);
	if(x==0)
		cout<<"Yes";
	else
		cout<<"No";
	for (int i = 1; i <=n; ++i)
	{
		cout<<nonleaf[i]<<" ";
	}
	return 0;
}