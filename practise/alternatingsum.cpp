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

#define ll long long
#define pb push_back
#define mp make_pair
const ll mod=1e9+9;
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair< ll,ll >
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vector <int>,greater< int > >
#define ff first
#define ss second
#define min(a,b) ((a<b)?(a):(b))
#define max(a,b) ((a>b)?(a):(b))
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(x,n,a) fill_n(x, n, a)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);

ll power(ll x,ll y)
{
	if(y==0)
		return 1;
	if(y==1)
		return x;
	ll res=1;
	x=x%mod;
	while(y>0)
	{
		if(y&1)
			res=(res*x)%mod;
		y=y>>1;
		x=(x*x)%mod;
	}
	return res;
}
ll inv(ll x,ll y){
    x+=mod;y+=mod;
    x%=mod;y%=mod;
    ll ret=(power(y,mod-2)%mod)*x;
    return (ret%mod);
}
charan
{
	fast;
	ll n,a,b,k;
	cin>>n>>a>>b>>k;
	char arr[k+1];
	ll num=(n+1)/k;
	for(int i=1;i<=k;i++)
	{
		cin>>arr[i];
	}
	ll ans=0;
	for(int i=1;i<=k;i++)
	{
		if(arr[i]=='+')
		{
			ans=(ans+((power(a,n-i+1)%mod)*(power(b,i-1)%mod))%mod)%mod;
		}
		else
		{
			ans+=((-1)*((power(a,n-i+1)%mod)*(power(b,i-1)%mod))%mod)%mod;
		}
		ans+=mod;
		ans%=mod;
	}
	ll rat=inv(b,a);
	ll p1=power(rat,k);
	ll p2=power(rat,n+1);
	if(p1==1)
	{
		cout<<(ans*num+mod)%mod;
	}
	else
	{
		ll temp=inv(1-p2,1-p1);
		 ans=(ans*temp+mod)%mod;
		cout<<ans;
	}

	return 0;
}