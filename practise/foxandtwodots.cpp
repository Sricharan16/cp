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
bool check[51][51];
ll n,m;
char arr[51][51];
void DFS(int i,int j,char ch,int x,int y)
{
	//cout<<"#"<<i<<" "<<j<<endl;
	if(check[i][j]==true)
	{
		cout<<"Yes";
		exit(0);
		return;
	}
		check[i][j]=true;
		if(i+1<=n && arr[i+1][j]==ch && !(x==i+1 && y==j))
			DFS(i+1,j,ch,i,j);
		if(i-1>=1 && arr[i-1][j]==ch && !(x==i-1 && y==j))
			DFS(i-1,j,ch,i,j);
		if(j+1<=m && arr[i][j+1]==ch && !(x==i && y==j+1))
			DFS(i,j+1,ch,i,j);
		if(j-1>=1 && arr[i][j-1]==ch && !(x==i && y==j-1))
			DFS(i,j-1,ch,i,j);
	
}
charan
{
	fast;
	ms0(check,false);
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(check[i][j]==false)
			{
				DFS(i,j,arr[i][j],-1,-1);
				//cout<<"done"<<endl;
			}
		}
		cout<<"No";
	return 0;
}