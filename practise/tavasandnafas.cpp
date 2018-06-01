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
	ll n;
	cin>>n;
	if(n==0)
	{
		cout<<"zero";
	}
	if(n==10)
	{
		cout<<"ten";
	}
	if(n==20)
	{
		cout<<"twenty";
	}
	if(n==30)
	{
		cout<<"thirty";
	}
	if(n==40)
		cout<<"forty";
	if(n==50)
		cout<<"fifty";
	if(n==60)
		cout<<"sixty";
	if(n==70)
		cout<<"seventy";
	if(n==80)
		cout<<"eighty";
	if(n==90)
		cout<<"ninety";
	if(n>90 && n<=99)
	{
		cout<<"ninety-";
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	if(n>80 && n<=89)
	{
		cout<<"eighty-";
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	if(n>70 && n<=79)
	{
		cout<<"seventy-";
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	if(n>60 && n<=69)
	{
		cout<<"sixty-";
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	if(n>50 && n<=59)
	{
		cout<<"fifty-";
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	if(n>40 && n<=49)
	{
		cout<<"forty-";
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	if(n>30 && n<=39)
	{
		cout<<"thirty-";
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	if(n>20 && n<=29)
	{
		cout<<"twenty-";
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	if(n>10 && n<=19)
	{

		if(n%10==1)
			cout<<"eleven";
		if(n%10==2)
			cout<<"twelve";
		if(n%10==3)
			cout<<"thirteen";
		if(n%10==4)
			cout<<"fourteen";
		if(n%10==5)
			cout<<"fifteen";
		if(n%10==6)
			cout<<"sixteen";
		if(n%10==7)
			cout<<"seventeen";
		if(n%10==8)
			cout<<"eighteen";
		if(n%10==9)
			cout<<"nineteen";

	}
	if(n>0 && n<=9)
	{
		if(n%10==1)
			cout<<"one";
		if(n%10==2)
			cout<<"two";
		if(n%10==3)
			cout<<"three";
		if(n%10==4)
			cout<<"four";
		if(n%10==5)
			cout<<"five";
		if(n%10==6)
			cout<<"six";
		if(n%10==7)
			cout<<"seven";
		if(n%10==8)
			cout<<"eight";
		if(n%10==9)
			cout<<"nine";

	}
	return 0;
}