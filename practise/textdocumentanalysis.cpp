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
	string s;cin>>s;
	int countinside=0;
	int maxiinside=0;
	int maxioutside=0;
	int maxi=0;
	vi inside;
	//vi outside;
	for(int i=0;i<s.length();i++){

		if(s[i]=='(')
		{
			maxi=max(maxioutside,maxi);
			maxioutside=0;
			i++;
			while(s[i]!=')')
			{
				 if(s[i]!='_')
				 	inside.pb(i);
				 //cout<<s[i];
				i++;
			}
		}
		else if(s[i]!='_')
		{
			maxioutside++;
			maxi=max(maxi,maxioutside);
		}
		else 
		{
			maxi=max(maxioutside,maxi);
			maxioutside=0;
		}
	}
	int prev=-1;
	for(int i=0;i<inside.size();i++)
	{
		if(inside[i]!=prev+1)
		{
			prev=inside[i];
			countinside++;
			maxiinside=max(maxiinside,countinside);
		}
		else
		{
			prev=inside[i];
		}
	}
	cout<<maxi<<" "<<maxiinside;
	return 0;
}	