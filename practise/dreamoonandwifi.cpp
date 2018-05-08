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
	string s1,s2;cin>>s1>>s2;
	int original=0;
	int c[11][11];
	for(int i=0;i<=10;i++)
	{
		c[i][0]=1;
		c[i][i]=1;
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=1;j<=10;j++)
		{
			if(i<j)
				c[i][j]=0;
			else
			c[i+1][j]=c[i][j-1]+c[i][j];
		}
	}
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]=='+')
			original++;
		else
			original--;
	}
	int current=0,unknown=0;
	for(int i=0;i<s2.length();i++)
	{
		if(s2[i]=='+')
			current++;
		else if(s2[i]=='-')
			current--;
		else if(s2[i]=='?')
			unknown++;
	}
	int num=0,deno=0;
	cout<<fixed<<setprecision(9);
	long double prob=0;
	if((current+unknown<original) || (current-unknown>original))
		cout<<prob;

		else
		{
			if(((original-current)%2+2)%2==0 && unknown%2==0)
			{
				int temp=(current+unknown-original)/2;
				num=num+c[unknown][temp];
				deno=pow(2,unknown);
				prob=(double)num/deno;
				cout<<prob;

			}
			else if(((original-current)%2+2)%2==1 && unknown%2==1)
			{
				int temp=(current+unknown-original)/2;
				num=num+c[unknown][temp];
				deno=pow(2,unknown);
				prob=(double)num/deno;
				cout<<prob;
			}
			else
			{
				prob=0;
				cout<<prob;
			}
		}
	return 0;

}