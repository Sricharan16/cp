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
const ll mod=1e9+7;
const ll med=1e9+9;
//change mod or med accordingly whenever necessary carefulwith mod!!!!!
inline ll add(ll x,ll y){ x += y; if(x >= mod) x -= mod; return x;}
inline ll sub(ll x,ll y){ x -= y; if(x < 0) x += mod; return x;}
inline ll mul(ll x,ll y){ return (x * 1ll * y) % mod;}
ll power(ll x,ll y){
    if(y==0)return 1;
    if(y==1)return x;
    ll ans=power(x,y/2)%mod;
    ans*=ans;
    ans%=mod;
    if(y%2)ans*=x;
    return ans%mod;
}
ll inv(ll x,ll y){
    x+=mod;y+=mod;
    x%=mod;y%=mod;
    ll ret=(power(y,mod-2)%mod)*x;
    return (ret%mod);
}
charan
{
	fast;
	ll n;
	cin>>n;
	int maxi=pow(2,n+1);
	ll arr[maxi];
	for(int i=2;i<=maxi-1;i++)
		cin>>arr[i];
	ll maximum=0;
	ll sum=0;
	int temp;
	ll brr[maxi];
	ms0(brr,maxi,0);
	for(int i=pow(2,n);i<=maxi-1;i++)
	{
		temp=i;
		sum=0;
		while(temp!=1)
		{
			sum+=arr[temp];
			temp/=2;
		}
		maximum=max(maximum,sum);
	}
	for(int i=pow(2,n);i<=maxi-1;i++)
	{
		temp=i;
		sum=0;
		while(temp!=1)
		{
			sum+=arr[temp];
			temp/=2;
		}
		brr[i]=maximum-sum;
	}
	for(int i=maxi-1;i>=2;i-=2)
	{
		int mini=min(brr[i],brr[i-1]);
		if(mini!=0)
		{
			brr[i/2]=mini;
			brr[i]-=mini;
			brr[i-1]-=mini;
		}
	}
	sum=0;
	for(int i=2;i<=maxi-1;i++)
		sum+=brr[i];
	cout<<sum<<endl;
	return 0;
}