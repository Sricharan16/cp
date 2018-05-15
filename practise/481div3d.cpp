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
	ll arr[n+1];
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	ll diff[10],ans[10];
	if(n<=2)
	{
		cout<<"0"<<endl;
		return 0;
	}
	else{
		ms0(diff,10,0);
		ms0(ans,10,0);
		ll curr[10];
		diff[1]=arr[2]-arr[1];
		curr[1]=arr[2];
		ans[1]=0;
		diff[2]=arr[2]+1-arr[1];
		curr[2]=arr[2]+1;
		ans[2]=1;
		diff[3]=arr[2]-1-arr[1];
		curr[3]=arr[2]-1;
		ans[3]=1;
		diff[4]=arr[2]-arr[1]-1;
		curr[4]=arr[2];
		ans[4]=1;
		diff[5]=arr[2]+1-arr[1]-1;
		curr[8]=arr[2]+1;
		ans[5]=2;
		diff[6]=arr[2]-1-arr[1]-1;
		curr[6]=arr[2]-1;
		ans[6]=2;
		diff[7]=arr[2]-arr[1]+1;
		curr[7]=arr[2];
		ans[7]=1;
		diff[8]=arr[2]+1-arr[1]+1;
		curr[8]=arr[2]+1;
		ans[8]=2;
		diff[9]=arr[2]-1-arr[1]+1;
		curr[9]=arr[2]-1;
		ans[9]=2;
		int flags=0;
		ll ansi=0;
		for(int i=3;i<=n;i++)
		{
			flags=0;
			if(arr[i]+1-arr[i-1]-1 ==diff[3]||arr[i]+1-arr[i-1]-1 ==diff[6]||arr[i]+1-arr[i-1]-1 ==diff[9])
			{
				flags=1;
				ansi=min(ansi,)
			}
			if(flags==0)
			{
				cout<<"-1";
				exit(0);
			}
		}
		

	}
	int mini=1000000;
	for(int i=1;i<=9;i++)
		mini=min(mini,ans[i]);
	cout<<mini;
	return 0;
}