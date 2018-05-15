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
	ll n,k;cin>>n>>k;
	if(k==(n-2)|| k==2*(n-2))
	{
		cout<<"YES"<<endl;
		 if(k==(n-2))
		{
			for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;
			cout<<'.';
			for(int i=2;i<=n-1;i++)
				cout<<'#';
			cout<<'.';
			cout<<endl;
			for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;
			for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;
		}
		else
		{
			for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;
			cout<<'.';
			for(int i=2;i<=n-1;i++)
				cout<<'#';
			cout<<'.';
			cout<<endl;
			cout<<'.';
			for(int i=2;i<=n-1;i++)
				cout<<'#';
			cout<<'.';
			cout<<endl;
			for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;
		}
	}
	else if(k%2==0 )
	{
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++)
			cout<<".";
		cout<<endl;
		cout<<".";
		for(int i=1;i<=k/2;i++)
			cout<<"#";
		for(int i=(k/2)+1;i<=n-1;i++)
			cout<<".";
		cout<<endl;
		cout<<".";
		for(int i=1;i<=k/2;i++)
			cout<<"#";
		for(int i=(k/2)+1;i<=n-1;i++)
			cout<<".";
		cout<<endl;
		for(int i=1;i<=n;i++)
			cout<<".";
		cout<<endl;
		
	}
	else if(k%2==1 && k>=1 && k<n-2)
	{ //n-2 horizontal
		int l=(n+1)/2;
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;
		string str="";
		for(int i=1;i<=k;i++)
		str+="#";	
  for(int i=1;i<=(n-k)/2;i++)
		str='.'+str;
	for(int i=1;i<=(n-k)/2;i++)
		str=str+'.';
	cout<<str;
			cout<<endl;
			
		for(int i=1;i<=n;i++)
				cout<<'.';

			cout<<endl;
			for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;

	}
	else if(k%2==1 && k>n-2&& k<=2*(n-2)-1)
	{
		int temp=k-(n-2);
		string str="";
		for(int i=1;i<=temp/2;i++)
			str+="#";
		str='.'+str;
		string tempstr=str;
		int lll=str.length();
		for(int i=1;i<=n-(2*lll);i++)
			str=str+'.';
		reverse(tempstr.begin(),tempstr.end());
		str=str+tempstr;
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;
			cout<<'.';
			for(int i=2;i<=n-1;i++)
				cout<<'#';
			cout<<'.';
			cout<<endl;
			cout<<str;
			cout<<endl;
			for(int i=1;i<=n;i++)
				cout<<'.';
			cout<<endl;

	}
	else 
	{
		cout<<"NO";
	}
	return 0;
}