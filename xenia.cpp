#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
	int n,m;cin>>n>>m;
	int a[n+1]={0};
	bool visited[n+1]={false};int t;
	int p[m];
	long long sum=0;

	for(int i=0;i<m;i++)
		{cin>>p[i];a[p[i]]++;}
	//sort(p,p+m);
	int counter=1;
	for(int i=0;i<m;i++)
	{
		// if(visited[p[i]]==false)
		// {
		// 	sum=sum+p[i]-counter;
		// 	counter=p[i];
		// 	visited[p[i]]=true;
		// }
		// else
		// 	{
		// 		sum=sum+n;
		// 		counter=p[i];
		// 	}
		if(p[i]<counter)
		{sum=sum+p[i]+n-counter;
			counter=p[i];
		}
		else
		{
			sum=sum+p[i]-counter;
			counter=p[i];
		}
	}
	cout<<sum;
	return 0;
}