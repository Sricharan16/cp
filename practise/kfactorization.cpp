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
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);
bool primes[100000];
void seive()
{
	for(int p=2;p<=sqrt(100000);p++)
	{
		if(primes[p]==true)
			for(int j=2*p;j<=100000;j+=p)
				primes[j]=false;
	}
}
charan
{
	fast;
	ll n,k;cin>>n>>k;
	
	ms0(primes,true);
	primes[1]=false;
	seive();
	// z
	vector <int>factors;
	for(int i=2;i<=100000;i++)
	{
		if(primes[i])
		{
			while(n%i==0)
			{
				factors.pb(i);
				n=n/i;
			}
		}
	}
	if(k>factors.size())
		cout<<"-1";
	else
	{
		for(int i=1;i<=k-1;i++)
		{
			cout<<factors[i-1]<<" ";
		}
		ll num=1;
		for(int i=k;i<=factors.size();i++)
		{
			num=num*factors[i-1];
		}
		cout<<num;
	}
	return 0;
}