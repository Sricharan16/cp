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
vi langugaes[101];//stores persons who knows a language 
vi persons[101]; //stores languages known by a person
bool people[101];
set <int> overall;
void DFS(int p)
{
	people[p]=true;
	overall.insert(p);
	for(int i=0;i<persons[p].size();i++)
	{
		for(int j=0;j<langugaes[persons[p][i]].size();j++)
		{
			if(people[langugaes[persons[p][i]][j]]==false)
			{
				DFS(langugaes[persons[p][i]][j]);
			}
		}
	}
}

charan
{
	fast;
	ll temp;
	ll n,m;cin>>n>>m;int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=1;j<=x;j++)
		{
			cin>>temp;
			persons[i].pb(temp);
			langugaes[temp].pb(i);
		}
	}
	int ans=0;
	ms0(people,false);
	for(int i=1;i<=n;i++)
	{
		if(people[i]==false)
		{
		DFS(i);
		for (std::set<int>::iterator it=overall.begin(); it!=overall.end(); ++it)
			cout<<(*it)<<" ";
		cout<<endl;
		if(overall.size()!=n)
			ans++;
		else 
			break;
		}
	}
	cout<<ans;
	//cout<<"0";
	return 0;
}