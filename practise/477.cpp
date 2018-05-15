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
	ll n,s;cin>>n>>s;
	ll arr[n+1];
	ll x,y;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		arr[i]=x*60+y;
		//cout<<"#"<<arr[i]<<endl;
	}
	int k=1;
	//cout<<s<<endl;
	if(arr[1]>s)
	{
		cout<<"0 0";
		return 0;
	}
	for(int i=0;i<=25;i++)
	{
		for(int j=0;j<=59;j++)
		{
			// if(i==2 && j==0)
			// {
			// 	cout<<k<<endl;
			// }
			if((arr[k]-i*60-j)>s && i*60+j-arr[k-1]>s)
			{
				//cout<<arr[k]<<" "<<k<<endl;
				cout<<i<<" "<<j;
				return 0;
			}
			 else if(i*60+j>arr[k])
			 {

				k++;
			// 	k++;
			// 	if(k==n+1)
			// 		k--;
			 }
			
		}
	}
	if(k>=n)
			{
				//cout<<"here";
				cout<<(arr[n]+s+1)/60<<" "<<(arr[n]+s+1)%60;
				return 0;
			}
	return 0;
}