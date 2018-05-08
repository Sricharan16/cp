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
charan
{
	ll n,x;
	char c;
	ll temp;
	ll count=0;
	cin>>n>>x;
	f(i,0,n){
		cin>>c>>temp;
		if(c=='+')
		{
			x=x+temp;
		}
		if(c=='-')
		{
			if(x>=temp)
				x=x-temp;
			else
				count++;
		}
	}
	cout<<x<<" ";
	cout<<count;
}