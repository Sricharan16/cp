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
pair<string,string> s[201];
set <string> overall;
charan
{//an a question so brute force also worked 
	fast;
	ll n;cin>>n;
	string p,q,r;

	for(int i=1;i<=n;i++)
	{
		cin>>p>>q>>r;
		transform(p.begin(),p.end(),p.begin(),::tolower);
		transform(r.begin(),r.end(),r.begin(),::tolower);
		s[i].ff=p;
		s[i].ss=r;
	}
	//cout<<"HELLO";
	int length=0;
	string temp;
	int counto=0;
	temp="polycarp";
	//cout<<temp;
	set <string> children;
	overall.insert(temp);
	while(counto<=210)
	{
		//cout<<temp;
		children.clear();
		int present=overall.size();
		for(int i=1;i<=n;i++)
		{
			set<string>::iterator it;
			  for (it = overall.begin(); it != overall.end(); it++)
			   {
			  
				if(s[i].ss==(*it))
				children.insert(s[i].ff);
			}
		}
		set<string>::iterator it;
			  for (it = children.begin(); it != children.end(); it++)
			  	overall.insert(*it);
		int after=overall.size();
		if(present!=after)
			length++;
		counto++;
	}
	cout<<length+1;
	return 0;
}