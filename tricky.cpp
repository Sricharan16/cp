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
#define f(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>b;i--)
charan
{
	ll sum=0;
	ll n,t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		cin>>n;
		long double k=(log(n)/log(2));
		//cout<<k<<endl;
		long long l=k;
		ll p=(ll)pow(2,l+1);
		//cout<<p-1<<endl;
		sum=(n*(n+1)/2)-2*(p-1);
		cout<<sum<<endl;
	sum=0;
	}
	
}