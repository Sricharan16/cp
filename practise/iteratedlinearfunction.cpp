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
ll power(ll a,ll b)//a^b
{
	//cout<<"camee";
	//int p=1;
	ll res=1;
	a=a%mod;
	while(b>0)
	{
		//cout<<b<<endl;
		//cout<<(b&p)<<endl;
		if(b & 1)
		{
			res=(res*a)%mod;
			//cout<<"came:"<<res<<endl;
		}
		b = b>>1;
		a=(a*a)%mod;
	}
	return res;
}
charan
{
	fast;
	ll a,b,n,x;cin>>a>>b>>n>>x;
	if(a==1)
	{
		ll ans=((x)%mod+((n%mod)*(b%mod))%mod)%mod;
		cout<<ans;
	}
	else
	{
		//a^n x +(a^n -1)/(a-1)*b
		ll ans=(((power(a,n))%mod)*(x%mod))%mod;
		//cout<<ans<<endl;
		ans+=(((power(a-1,mod-2))*(b%mod))%mod*((power(a,n)-1)%mod))%mod;
		cout<<ans%mod;
	}
	//cout<<1&1<<endl;
	return 0;
}