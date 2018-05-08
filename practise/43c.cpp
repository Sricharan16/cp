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
bool compare(tri a, tri b)
{
	if(a.second.first==b.second.first)
		return a.second.second>b.second.second;
	else if(a.second.first!=b.second.first)
		return a.second.first<b.second.first;
}
charan
{
	fast;
	ll n;
	cin>>n;
	tri arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i].second.first>>arr[i].second.second;
		arr[i].first=i;
	}
	sort(arr+1,arr+n+1,compare);
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<arr[i].second.first<<" "<<arr[i].second.second;
	// 	cout<<" "<<arr[i].first<<endl;
	// }
	int flags=0;
	int pos1=0;
	int pos2=0;
	for(int i=n;i>=2;i--)
	{
		if(arr[i].second.second<=arr[i-1].second.second)
		{
			flags=1;
			pos1=arr[i].first;
			pos2=arr[i-1].first;
		}
	}
	if(flags==0)
		cout<<"-1 -1"<<endl;
	else 
		cout<<pos1<<" "<<pos2;
	return 0;
}