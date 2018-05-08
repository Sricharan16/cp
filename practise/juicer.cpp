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
	int n,b,d;
	cin>>n>>b>>d;
	int t,count=0,c=0;
	f(i,0,n){cin>>t;if(t<=b){count=count+t;}if(count>d){c++;count=0;}}
	cout<<c;
}