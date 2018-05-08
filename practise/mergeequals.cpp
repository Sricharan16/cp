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
#define pii pair<ll,ll>
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define ff first
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
ll t[150005]={0};
charan
{
	fast;
	ll n;
	cin>>n;ll x;
	priority_queue<pii,vector <pii>, greater <pii> > pq;
	priority_queue<pii,vector <pii>, greater <pii> > final;
	for(ll i=1;i<=n;i++){
		cin>>x;
		pq.push(mp(x,i));
	}
	ll y;
	// cout<<pq.size()<<endl;
	// for(int i=1;i<=n;i++){
	// 	x=pq.top();
	// 	pq.pop();
	// 	cout<<x<<" ";
	// }
	// cout<<"#####"<<endl;
	ll a,b;
	for(ll i=1;i<=n-1;i++){
		x=pq.top().ff;
		a=pq.top().ss;
		pq.pop();
		y=pq.top().ff;
		b=pq.top().ss;
		pq.pop();
		//cout<<x<<" "<<y<<endl;
		if(x==y){
			pq.push(mp(2*x,b));
			//cout<<"#"<<2*x<<endl;
		}
		else{
			final.push(mp(x,a));
			pq.push(mp(y,b));
			//cout<<"##"<<x<<endl;
		}
		
	}
	x=pq.top().ff;
	a=pq.top().ss;
	final.push(mp(x,a));
	cout<<final.size()<<endl;
	ll l=final.size();
	ll ans[l+1];
	for(ll i=1;i<=l;i++){
		x=final.top().ff;
		a=final.top().ss;
		//cout<<x<<" "<<a<<endl;
		final.pop();
		t[a]=x;
	}
	for(ll i=1;i<=n;i++){
		if(t[i]!=0)
		cout<<t[i]<<" ";
	}
	return 0;
}