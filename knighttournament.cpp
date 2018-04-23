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
#define sort(a) sort(a.begin(),a.end())
#define ff first
#define ss second
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
ll arr[300005];
ll tree[4*300005];
ll ans;
void update(ll node,ll start ,ll end,ll l, ll r, ll val){
	cout<<"updateing"<<node<<endl;
	if(r<start || l>end)
		return;
	if(tree[node]!=-1)
		return;
	if(start==end && tree[node]==-1)
	{
		//cout<<"come here"<<endl;
		tree[node]=val;
		return;
	}
   if(start>=l && r>=end && tree[node]==-1)
	{
		tree[node]=val;
		return;
	}
	else
	{
		int mid= (start+end)/2;
		update(2*node,start,mid,l,r,val);
		update(2*node+1,mid+1,end,l,r,val);
	}
}
void query(ll node,ll start, ll end,ll l){
	if(l<start || l>end)
		return ;
	//if(tree[node]==-1)
		//return -1;
	if(start==end)
	{
		ans= tree[node];
		
	}
   if(start<=l && l<=end && tree[node]!=-1)
	{
		ans= tree[node];
		
	}
	else
	{
		int mid= (start+end)/2;
			 query(2*node,start,mid,l);
		 query(2*node+1,mid+1,end,l);
	}
	
}
charan
{
	fast;
	ll n,m,l,r,x;cin>>n>>m;int j;
	ms0(tree,-1);
	f(i,1,m+1){
		cin>>l>>r>>x;
		if(x!=l)
		update(1,1,n,l,x-1,x);
		if(x!=r)
		update(1,1,n,x+1,r,x);
	cout<<"after update"<<i<<"value"<<tree[2]<<endl;
	cout<<"####"<<endl;
	f(j,1,n+1){
		query(1,1,n,j);
		cout<<ans<<" ";
	}
	}
	cout<<"111111111111";
	f(i,1,n+1){
		query(1,1,n,i);
		cout<<ans<<" ";
	}
	return 0;
}