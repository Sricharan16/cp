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
#define ms0(x,n,a) fill_n(x, n, a)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);
int arr[256];
int brr[256];
int crr[256];
charan
{
	fast;
	ll n;cin>>n;
	ms0(arr,256,0);
	ms0(brr,256,0);
	ms0(crr,256,0);
	string str;
	cin>>str;
	int l=str.length();
	//cout<<l<<endl;
	for(int i=0;i<str.length();i++)
	{
			arr[str[i]]++;
	}
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
			brr[str[i]]++;
	}cin>>str;
	for(int i=0;i<str.length();i++)
	{
		
			crr[str[i]]++;
	}
	if(l<=n)
	{
		cout<<"Draw";
	}
	else
	{
		sort(arr,arr+n);
		sort(brr,brr+n);
		sort(crr,crr+n);
		int a=0;
		int b=0;
		int c=0;
		for(int i=0;i<256;i++)
		{
			a=max(a,arr[i]);
			b=max(b,brr[i]);
			c=max(c,crr[i]);
		}
		a+=n;b+=n;c+=n;
		//cout<<a<<b<<c;
		if((a>=l && b>=l)||(a>=l && c>=l)||(b>=l && c>=l))
			cout<<"Draw";
		else if(a>b && a>c)
			cout<<"Kuro";
		else if(b>c && b>a)
			cout<<"Shiro";
	else if(c>a && c>b)
			cout<<"Katie";
	}
	return 0;
}