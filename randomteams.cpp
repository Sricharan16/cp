/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define ff first
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,m;cin>>n>>m;
	if(m==1)
	{
		cout<<(n-m+1)*(n-m)/2<<" "<<(n-m+1)*(n-m)/2<<endl;
	}
	else if(n==m){
		cout<<"0 0"<<endl;
	}
	else
	{
		cout<<(((n%m)*((n/m)+1)*(n/m))+((m-(n%m))*((n/m)-1)*(n/m)))/2<<" "<<(n-m+1)*(n-m)/2;
	}
	return 0;
}