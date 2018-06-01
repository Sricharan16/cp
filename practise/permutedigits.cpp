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
int let[10];
int point=0;
charan
{
	fast;
	string a;string b;
	cin>>a>>b;
	
	ms0(let,10,0);
	for(int i=0;i<a.length();i++)
		let[a[i]-'0']++;
	int num[a.length()];
	
	if(b.length()>a.length())
	{
		for(int i=9;i>=0;i--)
		{
			for(int j=1;j<=let[i];j++)
				cout<<i;
		}
		return 0;
	}
	else
	{
		for(int i=0;i<b.length();i++)
		{
			for(int j=b[i]-'0';j>=0;j--)
			{
				if(let[j]>0)
				{
					if(j<b[i]-'0')
					{
						num[point]=j;
						let[j]--;
						point++;
						for(int p=9;p>=0;p--)
							{
								for(int q=1;q<=let[p];q++)
									{
										num[point]=p;
										point++;
									}
							}
						break;
					}
					else
					{
					num[point]=j;
					point++;
					let[j]--;
					break;
					}
				}
				if(j==0 && let[j]==0)
				{
					point--;
					let[num[point]]++;
					for(int p=num[point]-1;p>=0;p--)
							{
								if(let[p]>0)
									{
										num[point]=p;
										let[p]--;
										point++;
										break;
									}
							}
					for(int p=9;p>=0;p--)
							{
								for(int q=1;q<=let[p];q++)
									{
										num[point]=p;
										point++;
									}
							}
				}
				if(point>=a.length()-1)
					break;
			}
		}
	}
	//cout<<"here";
	for(int i=0;i<a.length();i++)
		cout<<num[i];
	return 0;
}