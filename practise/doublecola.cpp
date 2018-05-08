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
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n;cin>>n;
	double num=n;
	double k = (float)n/5;
	k=k+1;
	k=log(k)/log(2);
	k=k-1;
	ll l=ceil(k);
	n-=(pow(2,l)-1)*5;
	if(n<=pow(2,l))
		cout<<"Sheldon";
	else if(n>pow(2,l) && n<=2*pow(2,l))
		cout<<"Leonard";
	else if(n>2*pow(2,l) && n<=3*pow(2,l))
		cout<<"Penny";
	else if(n>3*pow(2,l) && n<=4*pow(2,l))
		cout<<"Rajesh";
	else 
		cout<<"Howard";

	return 0;
}