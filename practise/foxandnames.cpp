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
pair<char,char> check(string str1,string str2)
{
	if (str1==str2.substr(0,str1.length())) {
   return mp('A','A');
}
   else 
   {
   	for(int i=0;i<min(str1.length(),str2.length());i++)
   	{
   		if(str1[i]!=str2[i])
   			return str1[i];
   	}
   	int temp=min(str1.length(),str2.length());
   	return str1[temp];
   }
}
charan
{
	fast;
	ll n;cin>>n;
	string s[101];
	f(i,1,n+1)
	{
		cin>>s[i];
	}
	std::vector<char> v;
	f(i,1,n)
	{
		if(check(s[i],s[i+1])=='A')
		{
			//ignore
		}
		else
		{
			v.pb(check(s[i],s[i+1]));
		}
	}
	if(n>=1)
	if(s[n]==s[n-1].substr(0,s[n].length()) && s[n]!=s[n-1])
		{cout<<"Impossible";return 0;}
	if(s[n]==s[n-1])
	{

	}
	else
	{
		v.pb(check(s[n],s[n-1]));
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0;
}