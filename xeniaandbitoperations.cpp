/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
int a[132000],tree[4*132000];
void build(int node,int start,int end,int l){
	l++;
	if(start==end)
	{
		tree[node]=a[start];
	}
	else
	{
		int mid=(start+end)/2;
		build(2*node,start,mid,l);
		build(2*node+1,mid+1,end,l);
		if(l%2==0)
		tree[node]=tree[2*node]|tree[2*node+1];
		else
			tree[node]=tree[2*node]^tree[2*node+1];
	}
}
void update(int node,int start,int end,int idx,int value,int l){
	l++;
	if(start==end){
		a[idx]=value;
		tree[node]=value;
	}
	else{
		int mid=(start+end)/2;
		if(idx>=start && idx<=mid)
		update(2*node,start,mid,idx,value,l);
		else
		update(2*node+1,mid+1,end,idx,value,l);
	if(l%2==0)
	tree[node]=tree[node*2]|tree[node*2 +1];
	else
	tree[node]=tree[node*2]^tree[node*2 +1];
	}
}
int query(int node,int start,int end,int l,int r){
	if(r<start || l>end)
		return 0;
	if(start>=l && r>=end)
			return tree[node];
		int mid=(start+end)/2;
		int p1=query(2*node,start,mid,l,r);
		int p2=query(2*node+1,mid+1,end,l,r);
		return p1+p2;
}
charan
{
	fast;
	ll n,m;cin>>n>>m;ll idx,value;
	ll k=pow(2,n);
	f(i,1,k+1){
		cin>>a[i];
	}
	ll l=0;
	if(n%2==0)
		l=0;
	else
		l=1;
	build(1,1,k,l);
	for(int i=1;i<=m;i++){
		cin>>idx>>value;
		update(1,1,k,idx,value,l);
		cout<<query(1,1,k,1,k)<<endl;
	}

	
	return 0;
}