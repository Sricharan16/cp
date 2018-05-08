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
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,a,b,c,t;
	cin>>n>>a>>b>>c>>t;
	ll arr[n+1];
	f(i,1,n+1)cin>>arr[i];
	sort(arr+1,arr+n+1);
	ll temp=1;
	ll j=1;
	ll unsolved=0;
	ll maxi=0;
	ll cost=0;
		for(ll i=1;i<=n;i++)
		{
			if(arr[i]<=t)
				cost+=a;
		}
		maxi=max(cost,maxi);
		cost=0;
		//cout<<maxi<<endl;
	if(c>b){
		ll brr[1001]={0};
		for(ll i=1;i<=n;i++)
		{
			brr[arr[i]]++;
		}
		for(ll i=2;i<=t;i++)
			brr[i]+=brr[i-1];
		for(ll i=1;i<=t-1;i++)
		{
			cost+=(brr[i]*c);
		}
		for(ll i=1;i<=n;i++)
		{
			//if(n>=arr[i])
			cost+=(a-(t-arr[i])*b);
		}
		maxi=max(cost,maxi);
		//return 0;
	}
	cout<<maxi;
	return 0;
}