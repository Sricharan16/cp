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
	ll n;
	cin>>n;
	ll arr[n+1];
	int maxi=0;
	int maxnum=0;
	arr[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		maxnum=max(maxnum,arr[i]);
		if(arr[i]==arr[i-1])
		{
			cout<<"NO";
			exit(0);
		}
	}
	if(n==1)
	{
		cout<<"YES"<<endl;
		cout<<arr[1]<<" "<<arr[1]<<endl;
		return 0;
	}
	else
	{
		set <int> x;
		int counti=1;
		for(int i=2;i<=n;i++)
		{
			if(arr[i]==arr[i-1]+1)
				counti++;
			else if(abs(arr[i]-arr[i-1])>counti)
				counti=0;
			else
			{
				cout<<"NO";
				return 0;
			}
			x.insert(abs(arr[i]-arr[i-1]));
		}
		if(x.size()<=2)
		{
			int maxii=0;
			cout<<"YES"<<endl;
			std::set<int>::iterator it;
			for (it = x.begin(); it != x.end(); ++it)
			{
			    maxii=max(*it,maxii); // Note the "*" here
			}
			maxii=max(maxii,counti);
			cout<<ceil((float)maxnum/maxii)<<" "<<maxii<<endl;
			return 0;
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	return 0;
}