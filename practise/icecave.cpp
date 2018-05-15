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
char arr[501][501];
bool visi[501][501];
ll n,m;
void dfs(int i,int j,int x,int y,int p,int q)
{
	if(visi[i][j]==true || (arr[i][j]=='X' && !(i==p && j==q)))
		return;
	else{
		//cout<<i<<" "<<j<<endl;
		if(i==p && j==q )
		{
			if(arr[i][j]=='X')
			{
			cout<<"YES";
			exit(0);
			}
		if(i+1<=n && !(x==i+1 && y==j))
			if(visi[i+1][j]==1 || arr[i+1][j]=='.')
			{
				//cout<<"1";
			cout<<"YES";
			exit(0);
			}
		if(i-1>=1 && !(x==i-1 && y==j))
			if(visi[i-1][j]==1 || arr[i-1][j]=='.')
			{
				//cout<<"2";
			cout<<"YES";
			exit(0);
			}
		if(j+1<=m && !(x==i && y==j+1))
			if(visi[i][j+1]==1 || arr[i][j+1]=='.')
			{
				//cout<<"3";
			cout<<"YES";
			exit(0);
			}
		if(j-1>=1 && !(x==i && y==j-1))
			if(visi[i][j-1]==1 || arr[i][j-1]=='.')
			{
				//cout<<"4";
			cout<<"YES";
			exit(0);
			}
			cout<<"NO";
			exit(0);
		}
		visi[i][j]=true;

		if(i+1<=n && !(x==i+1 && y==j))
			dfs(i+1,j,i,j,p,q);
		if(i-1>=1 && !(x==i-1 && y==j))
			dfs(i-1,j,i,j,p,q);
		if(j+1<=m && !(x==i && y==j+1))
			dfs(i,j+1,i,j,p,q);
		if(j-1>=1 && !(x==i && y==j-1))
			dfs(i,j-1,i,j,p,q);
	}
}
charan
{
	fast;
	ms0(visi,false);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cin>>arr[i][j];
	}
	ll posx,posy,fposx,fposy;
	cin>>posx>>posy>>fposx>>fposy;
	arr[posx][posy]='.';
	dfs(posx,posy,-1,-1,fposx,fposy);
	// int count=0;
	// if(fposx+1<=n)
	// {
	// 	if(visi[fposx+1][fposy])
	// 		count++;
	// }
	// if(fposx-1>=1)
	// {
	// 	if(visi[fposx-1][fposy])
	// 		count++;
	// }
	// if(fposy+1<=m)
	// {
	// 	if(visi[fposx][fposy+1])
	// 		count++;
	// }
	// if(fposy-1>=1)
	// {
	// 	if(visi[fposx][fposy-1])
	// 		count++;
	// }
	// if(count>=2)
	// 	cout<<"YES";
	// else
	cout<<"NO";
	return 0;
}