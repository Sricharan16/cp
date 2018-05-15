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

ll n,m,k;
ll sum=0;
bool visited[301][301];
void dfs(int i,int j,int x,int y,int p)
{
	if(visited[i][j]==true)
		return;
	else
	{
		cout<<i<<" "<<j<<" ";
		visited[i][j]=true;
		sum++;
		if(i-1>=1 && !(x==i-1 && y==j) && sum<p)
			dfs(i-1,j,i,j,p);
		if(i+1<=n && !(x==i+1 && y==j) && sum<p)
			dfs(i+1,j,i,j,p);
		if(j-1>=1 && !(x==i && y==j-1) && sum<p)
			dfs(i,j-1,i,j,p);
		if(j+1<=m && !(x==i && y==j+1) && sum<p)
			dfs(i,j+1,i,j,p);
	}
	
}
charan
{
	fast;
	cin>>n>>m;
	cin>>k;
	int temp=k;
	int count=(n*m)/k;
	int p,q;p=1;q=1;
	int lli=count+(n*m)%k;
	for(int i=1;i<=(((n*m)-lli)/count);i++)
	{
		cout<<count<<" ";
		int flags=0;
		for(p=1;p<=n && flags==0;p++)
			for(q=1;q<=m;q++)
			{
				sum=0;
				if(visited[p][q]==false)
				{
					dfs(p,q,-1,-1,count);
					flags=1;
					//p--;
					break;
				}
			}
		cout<<endl;
	}
	
	for(int i=count;i<=count;i++)
	{
		//cout<<"here";
		cout<<lli<<" ";
		for(int p=1;p<=n;p++)
			for(int q=1;q<=m;q++)
			{
				sum=0;
				if(visited[p][q]==false)
				{
					dfs(p,q,-1,-1,lli);
					break;
				}
			}
		cout<<endl;
	}
	return 0;
}