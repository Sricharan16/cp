#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,b;cin>>n>>b;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int mini=1002;
	int maxi=1;
	mini=min(b-1,n-b);
	maxi=max(b-1,n-b);
	int count=0;
	int dist[maxi+1]={0};
	for(int i=0;i<maxi+1;i++){
		if(a[b-i]==1 && i==0)
		{
			dist[i]=1;
		}
		else if(i<=mini)
		{
			if(a[b+i]==1 && a[b-i]==1)
				dist[i]=2;
			else if(a[b+i]==0 && a[b-i]==1)
				dist[i]=1;
			else if(a[b+i]==1 && a[b-i]==0)
				dist[i]=1;
			else
				dist[i]=0;
		}
		else{
			if(a[b+i]==0 && b+i<=n)
				dist[i]=0;
			else if(a[b+i]==1 && b+i<=n)
				dist[i]=1;
			else if(a[b-i]==1)
				dist[i]=1;
			else
				dist[i]=0;
		}
		
	}
	count+=dist[0];
	for(int i=0;i<maxi+1;i++){
		//cout<<dist[i]<<" ";
		if(dist[i]==2)
			count+=dist[i];
		else if(i>mini)
			count+=dist[i];

	}
	//cout<<endl;
	cout<<count;
	return 0;
}