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
	cout<<fixed;
	ll n,bx;cin>>n>>bx;
	ll arr[n+1];
	ll X=0,Y=0;
	for(ll i=1;i<=n;i++)cin>>arr[i];
	ll power[n+1];
	power[n]=1;
	for(ll i=n-1;i>=1;i--){
		power[i]=power[i+1]*bx;
	}
	for(ll i=1;i<=n;i++){
		X+=arr[i]*power[i];
	}
	ll m,by;cin>>m>>by;
	ll brr[m+1];
	for(ll i=1;i<=m;i++)cin>>brr[i];
	power[m]=1;
	for(ll i=m-1;i>=1;i--){
		power[i]=power[i+1]*by;
	}
	for(ll i=1;i<=m;i++){
		Y+=brr[i]*power[i];
	}
	if(X<Y)
		cout<<"<";
	else if(X==Y)
		cout<<"=";
	else
		cout<<">";
	return 0;
}