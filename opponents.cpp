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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,d;cin>>n>>d;
	string s;
	string comp;
	f(i,0,n){comp=comp+"1";}int count=0,maxi=0;
	f(i,0,d){cin>>s;if(s==comp){maxi=max(maxi,count);count=0;}
else
{count++;maxi=max(maxi,count);}}cout<<maxi;
}