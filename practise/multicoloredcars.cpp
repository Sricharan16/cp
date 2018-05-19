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
charan
{
	fast;
	ll n,a;cin>>n>>a;
	//int arr[n+1];
	ll x;
	int count=0;
	ll c[1000001];
	ms0(c,1000001,0);
	//int pos=0;
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x!=a)
		{
				if(c[x]>=count)
					c[x]++;
				// if(c[arr[i]]>ans)
				// {
				// 	ans=max(ans,c[arr[i]]);
				// 	pos=arr[i];
				// }
		}
		else
		{
			count++;
			// if(count>ans)
			// 	{
			// 		//cout<<i<<endl<<arr[i]<<endl;
			// 		cout<<"-1";return 0;
			// 	}

		}
	}	
	int pos=-1;
	for(int i=1;i<=1000000;i++)
	{
		if(i!=a)
		{
			if(c[i]>=count)pos=i;
		}
	}
	cout<<pos;
	return 0;
}