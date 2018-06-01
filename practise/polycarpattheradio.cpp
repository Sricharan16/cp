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
void printg(queue<int> q)
{
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
charan
{
	fast;
	int n,m;cin>>n>>m;
	int arr[n+1];
	//int brr[n+1];
	map<int,int> x;
	for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			//brr[i]=arr[i];
			x[arr[i]]++;
		}
	int mini=n/m;
	cout<<(n/m);
	int k=0;
	for(int i=1;i<=m;i++)
	{
		if(x[i]<mini)
		{
			k+=(mini-x[i]);
		}
	}
	queue<int> notrequired;
	queue<int> required;
	for(auto i:x)
	{
		if(i.ss<mini && i.ff<=m)
		{
			for(int j=1;j<=(mini-i.ss);j++)
				required.push(i.ff);
		}
		if(i.ss>mini && i.ff<=m)
		{
			for(int j=1;j<=i.ss-mini;j++)
				notrequired.push(i.ff);
		}
		if(i.ff>m)
		{
			for(int j=1;j<=i.ss;j++)
				notrequired.push(i.ff);
		}
	}

	cout<<" "<<k<<endl;
	// for(auto i:x)
	// {
	// 	cout<<i.ff<<" "<<i.ss<<endl;
	// }
	bool vis[n+1];
	ms0(vis,n+1,false);
	//printg(required);
	//cout<<endl;
	//printg(notrequired);
	while(!required.empty())
	{
		int temp=notrequired.front();
		int replace=required.front();
		//cout<<"#"<<replace<<"^^"<<temp;
		required.pop();
		notrequired.pop();
		for(int i=1;i<=n;i++)
		{
			if(arr[i]==temp && vis[i]==false)
			{
				arr[i]=replace;
				vis[i]=true;
				break;
			}
		}
	}
	//int count=0;
	//map<int,int>y;
	for(int i=1;i<=n;i++)
		{cout<<arr[i]<<" ";
			//y[arr[i]]++;
		}
	// for(int i=1;i<=n;i++)
	// 	{
	// 		if(brr[i]!=arr[i])
	// 			count++;
	// 	}
	// 	cout<<endl<<count<<endl;
	// 	for(auto i:y)
	// 		cout<<i.ff<<" "<<i.ss<<endl;
	return 0;
}