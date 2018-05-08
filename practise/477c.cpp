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
charan
{
	fast;
	ll n,m,cl,ce,v;
	cin>>n>>m>>cl>>ce>>v;
	cout<<fixed;
	// if(cl!=0)
	// {
	// 	for(int i=1;i<=cl;i++)
	// 		cin>>stairs[i];
	// 	for(int i=1;i<=ce;i++)
	// 		cin>>elevator[i];
	// }
	// else{
	// 	for(int i=1;i<=ce;i++)
	// 		cin>>elevator[i];
	// }
	vector<ll> vstairs;
	vector<ll> velevator;
	ll x;
	if(cl!=0)
	{
		for(int i=1;i<=cl;i++)
			{
				cin>>x;vstairs.pb(x);}
		for(int i=1;i<=ce;i++)
			{cin>>x;velevator.pb(x);
			}
	}
	else{
		for(int i=1;i<=ce;i++)
			{cin>>x;velevator.pb(x);
			}
	}
	ll q;cin>>q;
	ll x1,y1,x2,y2;
	ll dist=inf,dist2=inf,mini=inf;
	 vector<ll>::iterator lower,upper;
	// cout<<velevator[0]<<endl;
	for(int i=1;i<=q;i++)
	{
		cin>>x1>>y1>>x2>>y2;
		dist=inf,dist2=inf,mini=inf;
		if(x1==x2 && y1==y2)
			cout<<"0"<<endl;
		else if(x1==x2)
		{
			cout<<abs(y1-y2)<<endl;
		}
		else
		{
		if(v==1)
		{
			if(cl!=0)
			{
			
			  upper = upper_bound (vstairs.begin(), vstairs.end(),y1); 
			// (upper- vstairs.begin())0 .....cl
			 if ((upper-vstairs.begin())==0)
			 {
			 	dist=abs(vstairs[(upper-vstairs.begin())]-y1)+abs(x2-x1)+abs(vstairs[upper-vstairs.begin()]-y2);
			 }
			 else
			 {
			 	dist=abs(vstairs[upper-vstairs.begin()]-y1)+abs(x2-x1)+abs(vstairs[upper-vstairs.begin()]-y2);
			 	dist2=abs(vstairs[upper-vstairs.begin()-1]-y1)+abs(x2-x1)+abs(vstairs[upper-vstairs.begin()-1]-y2);
			 }
			 mini=min(dist2,dist);
			}
			 
			// (upper- vstairs.begin())0 .....cl
			 if(ce!=0)
			 {
			 	upper = upper_bound (velevator.begin(), velevator.end(),y1); 
			 if ((upper-velevator.begin())==0)
			 {
			 	dist=abs(velevator[upper-velevator.begin()]-y1)+abs(x2-x1)+abs(velevator[upper-velevator.begin()]-y2);
			 }
			 else
			 {
			 	dist=abs(velevator[upper-velevator.begin()]-y1)+abs(x2-x1)+abs(velevator[upper-velevator.begin()]-y2);
			 	dist2=abs(velevator[upper-velevator.begin()-1]-y1)+abs(x2-x1)+abs(velevator[upper-velevator.begin()-1]-y2);
			 }
			 mini=min(mini,dist);
			 mini=min(mini,dist2);
			}
			 cout<<mini<<endl;

		}
		else
		{
			if(cl!=0)
			{
			  upper = upper_bound (vstairs.begin(), vstairs.end(),y1); 
			
			// (upper- vstairs.begin())0 .....cl
			 if ((upper-vstairs.begin())==0)
			 {
			 	dist=abs(vstairs[upper-vstairs.begin()]-y1)+abs(x2-x1)+abs(vstairs[upper-vstairs.begin()]-y2);
			 }
			 else
			 {
			 	dist=abs(vstairs[upper-vstairs.begin()]-y1)+abs(x2-x1)+abs(vstairs[upper-vstairs.begin()]-y2);
			 	dist2=abs(vstairs[upper-vstairs.begin()-1]-y1)+abs(x2-x1)+abs(vstairs[upper-vstairs.begin()-1]-y2);
			 }
			 mini=min(dist2,dist);
			}
			if(ce!=0)
			{

			 upper = upper_bound (velevator.begin(), velevator.end(),y1); 
			
			// (upper- vstairs.begin())0 .....cl
			 if ((upper-velevator.begin())==0)
			 {
			 	//cout<<"came here ";
			 	long double temp=abs(x2-x1);
			 	ll lli=ceil(temp/v);
			 	dist=abs(velevator[upper-velevator.begin()]-y1)+abs(lli)+abs(velevator[upper-velevator.begin()]-y2);
			 }
			 else
			 {
			 	long double temp=abs(x2-x1);
			 	ll lli=ceil(temp/v);
			 	dist=abs(velevator[upper-velevator.begin()]-y1)+abs(lli)+abs(velevator[upper-velevator.begin()]-y2);
			 	dist2=abs(velevator[upper-velevator.begin()-1]-y1)+abs(lli)+abs(velevator[upper-velevator.begin()-1]-y2);
			 }
			 mini=min(mini,dist);
			 mini=min(mini,dist2);
			}
			cout<<ceil((abs(x2-x1)*)/v)<<endl;
			cout<<1.0*(x2-x1);
			 cout<<mini<<endl;
		}
	}
	}
	return 0;
}	