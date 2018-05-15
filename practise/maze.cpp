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
int counti=0;
int n,m,k,s=0;
char arr[501][501];
bool visited[501][501];
void DFS(int i,int j)
{
	//cout<<"######"<<i<<" "<<j<<"######"<<endl;
	 if(arr[i][j]=='.' && counti<s-k && visited[i][j]==false)
	 {
	 	counti++;
	 	visited[i][j]=true;
	 	//cout<<counti<<"#i"<<i<<"#J"<<j<<endl;
	 	if(i+1<=n)
	 	{
	 		//cout<<"###"<<counti<<endl;
	 		DFS(i+1,j);
	 	}
	 	if(j+1<=m)
	 	{
	 		DFS(i,j+1);
	 	}
	 	if(i-1>=1)
	 	{
	 		DFS(i-1,j);	
	 	}
	 	if(j-1>=1)
	 	{
	 		DFS(i,j-1);
	 	}

	 }
	 else if(arr[i][j]=='.' && counti>=s-k && visited[i][j]==false)
	 {
	 	//cout<<"entered herre";
	 	arr[i][j]='X';
	 	if(i+1<=n)
	 	{
	 		//cout<<"###"<<counti<<endl;
	 		DFS(i+1,j);
	 	}
	 	if(j+1<=m)
	 	{
	 		DFS(i,j+1);
	 	}
	 	if(i-1>=1)
	 	{
	 		DFS(i-1,j);	
	 	}
	 	if(j-1>=1)
	 	{
	 		DFS(i,j-1);
	 	}
	 }
	 else 
	 	return;
}
charan
{
	fast;
	
	cin>>n>>m>>k;
	int flags =0;
	int posx,posy;
	ms0(visited,false);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='.')
				s++;
			if(arr[i][j]=='.' && flags==0)
			{
				posx=i;
				posy=j;
				flags=1;
			}
		}
	}
	DFS(posx,posy);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cout<<arr[i][j];
		cout<<endl;
	}

	return 0;
}