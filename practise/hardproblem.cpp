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
#define print(a,b) cout<<">>>>>"<<"comparing"<<" "<<a<<" "<<b<<"<<<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
bool lex(string a,string b)
{
		//if(a.length()<b.length())
			//return 1;
		//else if(a.length()>b.length())
		//	return 0;
		if(a.length()>=b.length()){
			for(int i=0;i<b.length();i++){
				if(a[i]<b[i])
					return 1;
				else if(a[i]==b[i])
				{

				}
				else
					return 0;
			}
			return 0;
		}
		else
		{
			for(int i=0;i<a.length();i++){
				if(a[i]<b[i])
					return 1;
				else if(a[i]==b[i])
				{

				}
				else
					return 0;
			}
			return 1;	
		}

}
charan
{
	fast;
	ll n;cin>>n;
	ll arr[n+1];
	ll cost=0;
	f(i,1,n+1)cin>>arr[i];
	string str1,str2;
	string x;
	cin>>x;
	ll dp[2][n+1];
	dp[0][1]=0;string noinv=x;

	reverse(x.begin(),x.end());
	string inv=x;
	dp[1][1]=arr[1];
	ll ans;
	int len=x.length();
	f(i,2,n+1)
	{
		ans=999999999999999;
		cin>>x;
		int complen=x.length();
		if(!lex(x,noinv))
			ans=min(ans,dp[0][i-1]);
		if(!lex(x,inv))
			ans=min(ans,dp[1][i-1]);
		dp[0][i]=ans;
		string tempnoinv=x;
		ans=999999999999999;
		reverse(x.begin(),x.end());	
		if(!lex(x,noinv) && !lex(x,inv))
		{
			ans=min(dp[0][i-1],dp[1][i-1])+arr[i];
		}
		else
		{
		if(!lex(x,noinv))
			ans=min(ans,dp[0][i-1])+arr[i];
		if(!lex(x,inv))
			ans=min(ans,dp[1][i-1])+arr[i];
		}

		if(tempnoinv==x)
		dp[1][i]=min(ans,dp[0][i]);
	else
		dp[1][i]=ans;
		noinv=tempnoinv;
		inv=x;
	}
	ll last=min(dp[1][n],dp[0][n]);
	if(last!=999999999999999)
	cout<<last<<endl;
else
	cout<<"-1";
	return 0;
}