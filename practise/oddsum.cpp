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
	ll n;cin>>n;
	int arr[n+1];
	int maxi=-99999;
	ll sum=0;
	ll sumeve=0;
	vi odds;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x>0 && x%2==1)
			odds.pb(x);
		else if(x>=0 && x%2==0)
			sumeve+=x;
		else if(x<0 && abs(x)%2==1)
			maxi=max(maxi,x);
	}
	//cout<<sumeve<<endl;
	int lona=0;
	sort(odds.begin(),odds.end());
	if(odds.size()%2==0)
	{
		for(int i=1;i<odds.size();i++)
			sum+=odds[i];
		lona=sum;
		sum=0;
		for(int i=0;i<odds.size();i++)
			sum+=odds[i];
		sum+=maxi;
		lona=max(sum,lona);
		sum=lona;
	}
	else
	{
		for(int i=0;i<odds.size();i++)
			sum+=odds[i];
	}
	if(sum==0)
	{
		cout<<sumeve+maxi;
	}
	else
		cout<<sum+sumeve;
	return 0;
}