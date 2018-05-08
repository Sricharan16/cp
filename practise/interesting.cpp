/*I shall rise*/
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
ll cal(ll* a, ll n,ll t)
{
	ll low =1,high=n,mid=0;
	while(low<high){
	mid=(high+low)/2;
	if(a[mid]<t)
	{
		low=mid+1;
		mid=(high+low)/2;
		if(low>=high)
			{	if(a[mid]<t)
				return mid;
				else 
				return mid-1;}
	}
	else if(a[mid]>t)
	{
		high=mid-1;
		mid=(high+low)/2;
		
		if(low>=high)
			{	if(a[mid]<t)
				{return mid;}
				else 
				{return mid-1;} }
	}
	else
	{
		
		
		return mid;
	}
}
if(a[n]<=t)
	return n;
else 
	return n-1;
}
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;cin>>n;ll A[n+1]={0};
	f(i,1,n+1)cin>>A[i];
	int b[100005]={0};
	for (int i = 1; i < n+1; ++i)
	{
		b[A[i]]++;
	}
	for (int i = 2; i < 100001; ++i)
	{
		b[i]+=b[i-1];
	}
	ll q,t;
	cin>>q;f(i,0,q){cin>>t;
		if(t<=100000);
		cout<<b[t]<<endl;
		else
		cout<<b[100000];}
}	