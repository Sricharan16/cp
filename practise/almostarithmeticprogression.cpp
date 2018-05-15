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
ll a[100001],b[100001];
int dx[]={-1,0,1};
ll n;
int dy[]={-1,0,1};
ll ans=inf;
void check()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			ll x=a[1]+dx[i];
			ll y=a[2]+dy[j];
			ll diff=y-x;
			b[1]=x;
			b[2]=y;
			//cout<<diff<<" "<<b[1]<<" "<<b[2]<<endl;
			ll res=0;
			int flags=0;
			for(int k=3;k<=n;k++)
			{
				if(abs(a[k]-b[k-1]-diff)>1)
					flags=1;
				else
				{
					b[k]=b[k-1]+diff;
				}
				res+=abs(a[k]-b[k-1]-diff);
			}
			if(flags==0)
			{
			res+=(abs(dx[i])+abs(dy[j]));
			ans=min(ans,res);
			}

		}
	}
}
charan
{
	fast;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n<=2)
	{
		cout<<"0";
		return 0;
	}
	else 
	{
		check();
		if(ans!=inf)
		cout<<ans<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}