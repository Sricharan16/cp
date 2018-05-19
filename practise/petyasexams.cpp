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
#define tri pair<int,pii>
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);
class comparepairs
{
public:
	bool operator()(pair<int,int> a,pair<int,int> b)
	{
		return a.ss>b.ss;
	}
};
bool compare(pair<pair<int,int>,pair<int,int>> a,pair<pair<int,int>,pair<int,int>> b)
{
	//s/d/c
	if(a.ff.ss==b.ff.ss)
		return a.ss.ff<b.ss.ff;
	else
		return a.ff.ss<b.ff.ss;
}
charan
{
	fast;
	ll n,m;cin>>n>>m;
	pair<pair<int,int>,pair<int,int>> arr[m+1];
	for(int i=1;i<=m;i++)
	{
		cin>>arr[i].ff.ss>>arr[i].ss.ff>>arr[i].ss.ss;
		arr[i].ff.ff=i;
	}
	//s,d,c
	int brr[n+1];
	ms0(brr,n+1,0);
	ll j=1;
	for(int i=1;i<=m;i++)
	{
		brr[arr[i].ss.ff]=m+1;
	}
	sort(arr+1,arr+m+1,compare);
	priority_queue<pair<int,int>,vector<pair<int,int>>,comparepairs> pq;
	int k=1;
		for(int i=1;i<=n;i++)
		{
			while(i==arr[k].ff.ss)
			{
				for(int p=1;p<=arr[k].ss.ss;p++)
				pq.push(mp(arr[k].ff.ff,arr[k].ss.ff));
				if(k<m)
				 k++;
				else 
				break;
			}
			if(!pq.empty())
					{
						pair<int,int> temp=pq.top();
						pq.pop();
						if(j>=temp.ss)
						{
							cout<<"-1";
							return 0;
						}
						if(brr[j]!=m+1)
						brr[j]=temp.ff;
						else
						pq.push(temp);
					}
				j++;	
					
		}
	for(int i=1;i<=n;i++)
		cout<<brr[i]<<" ";
	return 0;
}