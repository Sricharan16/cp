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
	ll n;ll d;cin>>n>>d;
	ll k=log(n)/log(2);
	if(d==1){
		cout<<n<<endl;
		for(int i=1;i<=n;i++)
			cout<<i<<" ";
		return 0;
	}
	//cout<<(n-pow(2,n)+1)
	ll limit=k+(n-pow(2,k)+1);
	cout<<limit<<endl;
	for(int i=1;i<=k;i++)
		cout<<i<<" ";
	for(int i=1;i<=limit-k;i++)
		cout<<k+d*i<<" ";
	//cout<<k;
	return 0;
}