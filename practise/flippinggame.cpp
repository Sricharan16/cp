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
	int n;cin>>n;
	ll t;int arr[n+1];int count=0;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t==0)
			arr[i+1]=1;
		else
			{arr[i+1]=-1;count++;}
	}
	int maxsofar=arr[1],maxtillhere=arr[1];
	for(int i=2;i<=n;i++)
	{
		maxtillhere=max(maxtillhere+arr[i],arr[i]);
		maxsofar=max(maxsofar,maxtillhere);
	}
	cout<<maxsofar+count;
	return 0;
}