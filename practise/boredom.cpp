#include<iostream>
#include<string>
using namespace std;
#define MAX 100001
#define ll long int
ll dp[MAX];
ll count[MAX];
int main(){
	int n;
	int a;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		count[a]++;
	}
	dp[0]=0;
	dp[1]=count[1];
	for(ll i=2;i<MAX;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+count[i]*i);
	}
	cout<<dp[MAX-1];
	return 0;
}