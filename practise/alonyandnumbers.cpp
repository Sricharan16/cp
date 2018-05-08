/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define tri pair<int,pii>
#define mod (1000*1000*1000+7)
#define moddd (1000*1000*1000+9)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair< ll,ll >
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vector <int>,greater< int > >
#define sort(a) sort(a.begin(),a.end())
#define ff first
#define ss second
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(X) memset((X), 0, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,m;cin>>n>>m;
	ll a[5]={0};
	f(i,0,5){
		a[i]=n/5;
	}
	int l=n%5;
	f(i,1,l+1)
	{
		a[i]++;
	}
	ll b[5]={0};
	f(i,0,5){
		b[i]=m/5;
	}
	int p=m%5;
	f(i,1,p+1)
	{
		b[i]++;
	}
	f(i,0,5){
		//cout<<a[i]<<" "<<b[i]<<endl;
	}
	ll ans=(a[0]*b[0])+(a[1]*b[4])+(a[4]*b[1])+(a[3]*b[2])+(a[2]*b[3]);
	cout<<ans;
	return 0;
}