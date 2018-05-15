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
vi adj[101];
bool visi[101];
char color[101];
void dfs(int i,char ch)
{
	if(visi[i])
		 return ;
	else
	{
		visi[i]=true;
  		if(ch=='a')
		{
			for(auto k:adj[i])
				{
					if(color[k]!='b' && color[k]!='r')
						{
							color[i]='p';
							return;
						}
				}
		color[i]='a';
		
			for(auto j:adj[i])
			{
				int flags=0;
		
				if(!visi[j] && color[j]=='r' && flags==0)
				{
					dfs(j,'b');
				}
			}
		}
		else{
			visi[i]=true;
			for(auto k:adj[i])
					{
						if(color[k]!='a' && color[k]!='r')
							{
								color[i]='p';
								return;
							}
					}
			color[i]='b';
			
				for(auto j:adj[i])
				{
					int flags=0;
					if(!visi[j] && color[j]=='r' && flags==0)
					{
						dfs(j,'a');
					}
				}

		}
		
	}
}
charan
{
	fast;
	ll n,m;cin>>n>>m;
	ll x,y;
	ms0(color,101,'r');
	ms0(visi,101,false);
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	int teama=0,teamb=0;
	int count=0;
	int counta=0,countb=0;
	int ans=0;
	int j=0;
	for(int i=1;i<=n;i++)
	{
		counta=0,countb=0;
		//ms0(color,101,'r');
		//ms0(visi,101,false);
		if(!visi[i] && adj[i].size()!=0)
		{
			//if(j%2==0)
			dfs(i,'a');
			for(int i=1;i<=n;i++)
				{
					//cout<<i<<" "<<color[i]<<endl;
					if(color[i]=='a')
						counta++;
					if(color[i]=='b')
						countb++;
			
				}
		for(int i=1;i<=n;i++)
				{
					//cout<<i<<" "<<color[i]<<endl;
					if(color[i]=='a')
						{color[i]='r';}
					if(color[i]=='b')
						{color[i]='r';}
			
				}
				//cout<<"##"<<countb<<" "<<counta<<endl;
			if(teamb>teama)
			{
				teama+=max(counta,countb);
				teamb+=min(counta,countb);
			}
			else
			{
				teama+=min(counta,countb);
				teamb+=max(counta,countb);
			}
		}
		else if(adj[i].size()==0)
		{
			count++;
		}
	}
	ans=0;
	for(int i=1;i<=n;i++)
	{

		if(color[i]=='p')
			ans++;
	}
	for(int i=1;i<=count;i++)
	{
		if(teama>teamb)
		{
			teamb++;
		}
		else
			teama++;
	}
	cout<<n-2*min(teama,teamb);
	return 0;
}