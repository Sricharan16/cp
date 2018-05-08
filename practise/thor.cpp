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
bool flags[300005];
ll bit[300005];
ll getsum(ll n){
	//	n=n+1;
	ll sum=0;
	while(n>0)
	{
	sum+=bit[n];
	n-= n&(-n);
    }
    return sum;
}
void update(ll idx,ll value,ll n,ll p)
{
	//idx=idx+1;
	if(value==1)
	{
		while(idx<=n)
		{
			bit[idx]++;
			idx+= (idx)&(-idx);
		}
	}
	else if(value==2)
	{
		ll temp=bit[idx];
		while(idx<=n)
		{
			bit[idx]-=temp;
			idx+= (idx)&(-idx);
		}
	}
	else
	{
		
			while(idx<=n)
			{
				bit[idx]=0;
				idx+= (idx)&(-idx);
			}
		
	}
}
charan
{
	fast;
	ll maxi=0;
	ll n,q;cin>>n>>q;
	ll ch,x;
	ms0(flags,false);
	ms0(bit,0);
	ll count=0;
	for(int i=1;i<=q;i++)
	{
		cin>>ch>>x;
		update(x,ch,n,1);
		maxi=max(maxi,x);
		cout<<"###";
		if(ch==1)
			count++;
		for(int i=1;i<=n;i++)
		{
			cout<<bit[i]<<" ";
		}
		cout<<"###"<<endl;	
		ll sum=getsum(n);
		ll sum2=getsum(maxi);
		gdb(sum2);
		if(ch==3)
			{
				//cout<<sum-sum2<<endl;
				if(count>x)
			}
		else
		cout<<sum<<endl;
		
	}
	return 0;
}