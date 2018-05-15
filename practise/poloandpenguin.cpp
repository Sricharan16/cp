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
	ll n,m;cin>>n>>m;
	ll d;
	cin>>d;
	int arr[n+1][m+1];
	cin>>arr[1][1];
	int temp=arr[1][1]%d;
	int flags=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1 && j==1)
			{
				continue;
			}
			cin>>arr[i][j];
			if(arr[i][j]%d!=temp)
				flags=1;
		}
	}
	if(flags==1)
	{
		cout<<"-1";
		return 0;
	}
	else
	{
		int brr[n*m+1];
		int j=1;
		for(int i=1;i<=n;i++)
		{
			for(int k=1;k<=m;k++)
			{
				brr[j]=arr[i][k];
				j++;
			}
		}
		sort(brr+1,brr+(n*m)+1);
		temp=brr[(n*m)/2];
		ll ans=0;
		for(int i=1;i<=n*m;i++)
		{
			ans+=(abs(brr[i]-temp))/d;
		}
		int mini=ans;
		temp=brr[(n*m+1)/2];
		 ans=0;
		for(int i=1;i<=n*m;i++)
		{
			ans+=(abs(brr[i]-temp))/d;
		}
		cout<<min(ans,mini);
	}
	return 0;
}