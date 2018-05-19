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
vi adj[200001];
charan
{
	fast;
	ll n,k;cin>>n>>k;
	vector<long long> arr(n+1);
	vector <long long > brr(n+1);
	arr[0] = 0;
	brr[0] = 0;
	for( int i=1 ; i<=n ; i++ )
	{
		cin>>arr[i];
		brr[i]=arr[i];
	}
	sort(brr.begin(),brr.end());
	ll x,y;
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i=1;i<=n;i++)
	{
		ll ans=0;
		vector<long long>:: iterator low;
		low=lower_bound(brr.begin(),brr.end(),arr[i]);
		ans=low-brr.begin();
		//cout<<ans<<" ";
		for(int j=0;j<adj[i].size();j++)
		{
			//cout<<"<"<<arr[adj[i][j]]<<">"<<endl;
			if(arr[adj[i][j]]<arr[i])
				ans--;
		}
		cout<<ans-1<<" ";
		//cout<<endl;
	}
	return 0;
}	