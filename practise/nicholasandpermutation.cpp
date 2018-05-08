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
 int pos1=0;int pos2=0;int maxi=0;int mini=999;ll x;
 f(i,1,n+1){
 	cin>>x;
 	if(x>=maxi)
 	{
 		maxi=max(maxi,x);
 		pos1=i;
 	}
 	 if(x<mini)
 	{
 		mini=min(mini,x);
 		pos2=i;
 	}
 }
 //cout<<pos1<<pos2<<endl;
 ll ans=max(abs(pos1-1),abs(n-pos2));
  ans=max(ans,abs(pos2-1));
 ans=max(ans,abs(n-pos1));
 //ans=max()
 cout<<ans;
	return 0;
}