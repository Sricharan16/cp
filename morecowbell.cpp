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
#define max(a,b) (a>b)?a:b
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,k;cin>>n>>k;
	ll arr[n+1];
	f(i,1,n+1)cin>>arr[i];
	if(k>=n){
		int maxi=0;
		f(i,1,n+1)maxi=max(maxi,arr[i]);
		cout<<maxi;
	}
	else
	{
		int maxi=0;
		f(i,2*(n-k)+1,n+1)
		maxi=max(maxi,arr[i]);
		for(int i=1;i<=n-k;i++){
			maxi=max(maxi,arr[i]+arr[2*(n-k)-i+1]);
		}
		cout<<maxi;
	}
	return 0;
}