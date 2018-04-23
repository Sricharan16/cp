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
#define sort(a) sort(a.begin(),a.end())
#define ff first
#define ss second
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(X) memset((X), 0, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
string str;cin>>str;
vi pos;
f(i,0,str.length())
{
	if((str[i]-'0')%2==0)
		pos.pb(i+1);
		
}
if(pos.empty())
cout<<"-1";
else
{
	f(i,0,sz(pos)){
		if((str[pos[i]-1])-'0'<=str[str.length()-1]-'0')
		{
			char temp=str[pos[i]-1];
			str[pos[i]-1]=str[str.length()-1];
			str[str.length()-1]=temp;
			cout<<str;
			return 0;
		}
		else if(i==sz(pos)-1)
		{
			char temp=str[pos[i]-1];
			str[pos[i]-1]=str[str.length()-1];
			str[str.length()-1]=temp;
			cout<<str;
		}
	}
}
return 0;
}