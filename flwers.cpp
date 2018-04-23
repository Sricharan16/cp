#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007
#define ll long long 
int dp[100005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);
	ll t,k;
	cin>>t>>k;
	//dp[0]=1;
	for(int i=1;i<100001;i++)
	{
		if(i<k)
		{
			dp[i]=1;
		}
		else if(i>k)
		{
			dp[i]=(dp[i-1]+dp[i-k])%MAX;
		}
		else
		{
			dp[i]=2;
		}
	}
	ll sum=0;int sumi[100005];
	for(int i=1;i<100001;i++){
		sum=sum+dp[i];
		sumi[i]=(sum)%MAX;
		sum=sum%MAX;

	}
	int x,y;
	while(t--){
		cin>>x>>y;
		cout<<((sumi[y]-sumi[x-1])%MAX + MAX)%MAX<<endl;
	}
	return 0;
}