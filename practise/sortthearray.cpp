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
	ll n;cin>>n;
	pii arr[n+1];
	pii brr[n+1];
	vector<pii>q;
	ll x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		arr[i]=mp(x,i);
		brr[i]=arr[i];
	}
	sort(brr+1,brr+n+1);
	for(int i=1;i<=n;i++)
		{
			if(arr[i].ff!=brr[i].ff)
			{
				q.pb(arr[i]);
			}
		}
	if(q.size()<=1)
	{
		cout<<"yes"<<endl;
		cout<<"1 1";
	}
	else
	{
		//for(int i=0;i<)
		// for(int i=0;i<q.size();i++)
		// 	cout<<q[i].ff<<" ";
		// cout<<endl;
		for(int i=0;i<q.size()-1;i++)
		{
			for(int j=q[i].ss;j<q[i+1].ss;j++)
			{
			if( arr[j].ff<arr[j+1].ff)
			{
				cout<<"no";
				return 0;
			}
			}
		}
		cout<<"yes"<<endl;
		cout<<q[0].ss<<" "<<q[q.size()-1].ss<<endl;
	}
	return 0;
}