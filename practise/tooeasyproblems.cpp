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
bool compare(tri a,tri b)
{
	if(a.ss.ss==b.ss.ss)
	{
		return a.ss.ff>b.ss.ff;
	}
	else
	{
		return a.ss.ss<b.ss.ss;
	}
}
charan
{
	fast;
	ll n,T;
	cin>>n>>T;
	tri arr[n+1];
	int x,y;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		arr[i]=mp(i,mp(x,y));
	}
	sort(arr+1,arr+n+1,compare);
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<arr[i].ff<<" "<<arr[i].ss.ff<<" "<<arr[i].ss.ss<<endl;
	// }
	ll t=0;
	vector<tri> prob;
	for(int i=1;i<=n;i++)
	{
		if(t+arr[i].ss.ss<=T)
		{
			t+=arr[i].ss.ss;
			prob.pb(arr[i]);
		}
		else
			break;
	}
	int score=0;
	int count=prob.size();
	for(int i=0;i<count;i++)
	{
		if(count<=prob[i].ss.ff)
			score++;
	}
	cout<<score<<endl;
	cout<<count<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<prob[i].ff<<" ";
	}
	return 0;
}