#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>b;i--)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
charan
{
	ll cost[4];
	ll flags[4]={0};
	f(i,0,4)cin>>cost[i];
	string s;
	cin>>s;ll sum=0;
	f(i,0,s.length())
	{
		ll c=s[i]-'0';
		//if(flags[0]+flags[1]+flags[2]+flags[3]==4)break;
		sum=sum+cost[c-1];
		flags[c-1]=1;

	}
	cout<<sum;
}