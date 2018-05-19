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
charan
{
	fast;
	ll n;cin>>n;
	string str;
	cin>>str;
	if(n==1)
	{
		if(str=="1")
			cout<<"Yes";
		else
			cout<<"No";
	return 0;
	}
	else if(n==2)
	{
		if(str=="10"||str=="01")
			cout<<"Yes";
		else
			cout<<"No";
		return 0;
	}
	else
	{
		if(str[1]=='1')
		{
			if(str[0]=='0')
			{

			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		if(str[1]=='0')
		{
			if(str[0]=='1')
			{

			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		if(str[n-2]=='1')
		{
			if(str[n-1]=='0')
			{

			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		if(str[n-2]=='0')
		{
			if(str[n-1]=='1')
			{

			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		for(int i=0;i<str.length();i++)
		{
			if(i>1 && i<n-1)
			if(str[i]=='1')
			{
				if(str[i-1]=='0' && str[i+1]=='0')
				{

				}
				else
				{
					cout<<"No";
					return 0;
				}

			}
		}
		for(int i=0;i<str.length()-2;i++)
		{
			//if(i>1 && i<n-1)
			if(str[i]=='0'&& str[i+1]=='0'&& str[i+2]=='0')
			{
				cout<<"No";
				return 0;
			}
		}

		}
	cout<<"Yes";
	return 0;
}