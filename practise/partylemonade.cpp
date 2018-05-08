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
	ll n,l;cin>>n>>l;
	ll arr[n+1];
	f(i,1,n+1)cin>>arr[i];
	f(i,2,n+1)arr[i]=min(arr[i],2*arr[i-1]);
	ll cost=0;
	ll num=l;
	ll p;
	string str;
	while(l>0)
	{
		p=l%2;
		l/=2;
		str=to_string(p)+str;
	}
	if(num%2==0)
	{
		ll j=1;
		for(ll i=str.length()-1;i>=0;i--,j++)
		{
			if(str[i]=='1')
				cost+=arr[j];
		}
		// for(;j<=n;j++){
		// 	cost=min(cost,arr[j]);
		// }

	}
	else 
	{
		ll j=1;
		for(ll i=str.length()-1;i>=0;i--,j++)
		{
			if(str[i]=='1')
				cost+=arr[j];
		}
		// for(;j<=n;j++){
		// 	cost=min(cost,arr[j]);
		// }
	}
	ll costi=ceil(num/pow(2,n-1));
	costi=costi*arr[n];
	cost=min(cost,costi);
	cout<<cost;
	return 0;
}