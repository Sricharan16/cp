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
string query2(string str){
	//rkcll
	int l=1;
	while(str[l]<='9' && str[l]>='0')
		l++;
	string row=str.substr(1,l-1);
	string column=str.substr(l+1,str.length()-1);
	//gdb(column);
	int col=stoi(column);
	string stri="";
	char ch;
	if(col<=26)
	{
		char temp=col+65-1;
 	stri=temp+stri;
	}
	else
	while(col>0)
	{
		int temp=col%26;
		if(temp==0)
		{
		ch=temp+65+25;
		 //cout<<ch<<"###"<<endl;
		 stri=ch+stri;
		 col=col/26;
		}
		else
		{
		ch=temp+65-1;
		 //cout<<ch<<"###"<<endl;
		 stri=ch+stri;
		 col=col/26;
		}
		 
	}
	//gdb(stri);
	return stri+row;
}
string query1(string str){
	//rc23
	int i=0;
	int row=0;
	int column=0;
	//cout<<"came here";
	while(str[i]>'9' || str[i]<'0')
		i++;
	//return str;
//cout<<i<<endl;
	string rowi=str.substr(i,str.length()-i);
	//return rowi;
	string col=str.substr(0,i);
	cout<<col;
	ll power=1;
	for(int i=col.length()-1;i>=0;i--)
	{
		column+=(col[i]-'A'+1)*power;
		power=power*26;
	}
	return "R"+rowi+"C"+to_string(column);

}
charan
{
	fast;
	ll n;
	cin>>n;
	string s[n+1];
	for(int i=1;i<=n;i++)
		cin>>s[i];
	for(int i=1;i<=n;i++)
	{
		string str=s[i];
		int flags=0;
		if(str[0]!='R')
			{
				flags=1;
			}
		else{
			if(str[1]<='9' && str[1]>=0)
				flags=0;
			else
				flags=1;
		}
		// cout<<i<<" "<<flags<<endl;
		if(flags)
			cout<<query1(str)<<endl;
		else
			cout<<query2(str)<<endl;
	}
	return 0;
}