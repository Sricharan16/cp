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
int arr[10001];
bool visited[10001];
//bool evenvisited[10001];
ll n,m;
ll dist[10001];
void print_queue(std::queue<int> q)
{
  while (!q.empty())
  {
    std::cout << q.front() << " ";
    q.pop();
  }
  std::cout << std::endl;
}
void bfs(int i)
{
	queue<int> q;
	q.push(i);
	while(!q.empty())
	{
		//print_queue(q);

		int temp=q.front();
		q.pop();
		if(visited[2*temp]==false && 2*temp<=16)
		{
			dist[2*temp]=dist[temp]+1;
			visited[2*temp]=true;
			q.push(2*temp);

		}
		if(visited[temp-1]==false && temp-1>=1)
		{
			dist[temp-1]=dist[temp]+1;
			visited[temp-1]=true;
			q.push(temp-1);
		}

	}
}
charan
{
	fast;
	cin>>n>>m;
	dist[n]=0;
	ms0(visited,false);
	//ms0(evenvisited,false);
	bfs(n);
	cout<<dist[m];
	// for(int i=1;i<=10;i++)
	// 	cout<<i<<" "<<dist[i]<<endl;
	return 0;
}