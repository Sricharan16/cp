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
#define sort(a) sort(a.begin(),a.end())
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
	ll n;cin>>n;
	ll beauty=0;
	ll maxi= -500;
	ll mini= 500;
	ll x,y;ll minp=0,maxp=0;
	f(i,0,n){
		cin>>x>>y;
		if(x-y>=maxi){
			maxp=i+1;
			maxi=max(maxi,x-y);
		}
		if(x-y<=mini){
			minp=i+1;
			mini=min(mini,x-y);
		}
		beauty+=(x-y);
	}
	maxi*=(-1);
	mini*=(-1);
	if(abs(beauty)>= abs(beauty+2*maxi) && abs(beauty)>=abs(beauty+2*mini)){
		cout<<"0";
		return 0;
	}
	else if(abs(beauty+2*maxi)>=abs(beauty+2*mini))
	{
		cout<<maxp;
	}
	else
		cout<<minp;
	return 0;
}