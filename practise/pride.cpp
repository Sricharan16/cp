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
	ll arr[n+1];
	ll x;
	for(int i=1 ;i<=n ;i++ ){
		cin>>arr[i];
	}
	x=gcd(arr[1],arr[2]);
	for(int i=3 ;i<=n ;i++ ){
		x=gcd(x,arr[i]);
	}
	if(x!=1 || (n==1 && arr[1]!=1))
	{
		cout<<"-1";
		return 0;
	}
	if(n==1 && arr[1]==1)
	{
		cout<<"0";
		return 0;
	}
	else{
		ll mini=2000;
		int count=0;
		for(int i=1;i<=n;i++){
			if(arr[i]==1)
				count++;
		}
		if(count>0)
		{
			cout<<n-count;
			return 0;
		}
		for (int i = 1; i < n+1; ++i)
		{
			x=gcd(arr[i],arr[i]);
			for (int j=i+1;j<n+1;j++){
				if(gcd(x,arr[j])==1)
					mini=min(mini,j-i);
				x=gcd(x,arr[j]);
			}
		}

		cout<<mini+n-1-count;
	}
	return 0;
}