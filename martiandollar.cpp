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
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,b;cin>>n>>b;
	int arr[n+1];
	for (int i = 0; i < (n); ++i)
	{
		cin>>arr[i+1];
	}
	int maxii=b;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]<=b){
			int cu=b/arr[i];
			int re=b%arr[i]; int maxi=arr[i];
		for(int j=i+1;j<=n;j++){
			maxi=max(maxi,arr[j]);
		}
		int bal=cu*maxi+re;
		maxii=max(maxii,bal);
	}
	}
	cout<<maxii;
	return 0;
}