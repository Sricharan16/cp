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
charan
{
	fast;
	int n,k1,k2;cin>>n>>k1;ll x;
	queue <int> p1;
	queue <int> p2;
	for(int i=1;i<=k1;i++)
	{
		cin>>x;
		p1.push(x);
	}
	cin>>k2;
	for(int i=1;i<=k2;i++)
	{
		cin>>x;
		p2.push(x);
	}
	int count=0;
	while(!p1.empty() && !p2.empty() && count<=1025)
	{
		k1=p1.front();
		p1.pop();
		k2=p2.front();
		p2.pop();
		if(k1>k2)
		{
			p1.push(k2);
			p1.push(k1);
		}
		else 
		{
			p2.push(k1);
			p2.push(k2);
		}
		count++;
	}
	if(p1.empty() || p2.empty())
		{cout<<count<<" ";
	if(p1.empty())
		cout<<"2";
	else
		cout<<"1";
		}
	else
		cout<<"-1";
	return 0;
}