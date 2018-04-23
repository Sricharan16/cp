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
int cal(int* a, int n,int t)
{
	int low =1,high=n,mid=0;
	while(low<high){
	mid=(high+low)/2;
	if(a[mid]<t)
	{
		low=mid+1;
		mid=(high+low)/2;
		if(low>=high)
			{	if(a[mid]<=t)
				return mid;
				else 
				return mid-1;}
	}
	else if(a[mid]>t)
	{
		high=mid-1;
		mid=(high+low)/2;
		
		if(low>=high)
			{	if(a[mid]<=t)
				{return mid;}
				else 
				{return mid-1;} }
	}
	else
	{
		
		
		return mid;
	}
}

}
charan
{
	int n,sum=0,t;
	cin>>n;
	int a[n+1];
	a[1]=1;sum=sum+1;
	f(i,0,n-1){cin>>t;sum=sum+t;a[i+2]=sum;}
	int lst;cin>>lst;
	int m;cin>>m;

	f(i,0,m){cin>>t;cout<<cal(a,n,t)<<endl;}

}