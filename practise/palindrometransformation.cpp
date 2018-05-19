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
	ll n,p;
	cin>>n>>p;
	string str;cin>>str;
	vi pos;
	ll sum=0;
	for(int i=1;i<=(n+1)/2;i++)
	{
		if(str[i-1]!=str[n-i])
			pos.pb(i);
	}
	if(pos.size()==0)
	{
		cout<<"0";
		return 0;
	}
	int first=pos[0];
	int last=pos[pos.size()-1];
	if(p>(n+1)/2)
		p=n-p+1;
	if(p>=last)
	{
		sum+=(p-first);
	}
	else if(p<=first)
		sum+=(last-p);
	else
	{
		int temp1=2*(p-first)+(last-p);
		int temp2=(p-first)+2*(last-p);
		sum+=min(temp1,temp2);
	}
	for(int i=1;i<=(n+1)/2;i++)
	{
		sum+=min(abs(str[i-1]-str[n-i]),26-abs(str[i-1]-str[n-i]));
	}
	cout<<sum;
	return 0;
}