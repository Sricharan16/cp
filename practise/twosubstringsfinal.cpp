
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
	string str;
	cin>>str;
	int flags1=0,flags2=0;
	int i=0;
	for( i=0;i<str.length()-1;i++){
	
		if(str[i]=='A' && str[i+1]=='B' && flags1==0){
			flags1=1;
			i+=2;
			break;
		}
	}
	for(;i<str.length()-1;i++){
		 if(str[i]=='B' && str[i+1]=='A' && flags2==0){
			flags2=1;
			i++;
			break;
		}
	}
	if(flags1==1 && flags2==1)
		{cout<<"YES";return 0;}
	flags2=0;flags1=0;
	i=0;
	for(;i<str.length()-1;i++){
		
		if(str[i]=='B' && str[i+1]=='A' && flags2==0){
			flags2=1;
			i+=2;
			break;
		}
		
	}
	for(;i<str.length()-1;i++){
		
		 if(str[i]=='A' && str[i+1]=='B' && flags1==0){
			flags1=1;
			i++;
			break;
		}
		
	}
	if(flags1==1 && flags2==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}