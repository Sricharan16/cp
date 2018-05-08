/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define ff first
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	pair<int,int> point;
	point.ff=0;point.ss=0;
	ll n;cin>>n;
	ll count=0;
	string str;cin>>str;
	for(int i=0;i<str.length();i++){
		point.ff=0,point.ss=0;
		for(int j=i;j<str.length();j++){
			if(str[j]=='U')
				point.ss++;
			if(str[j]=='D')
				point.ss--;
			if(str[j]=='R')
				point.ff++;
			if(str[j]=='L')
				point.ff--;
			if(point.ff==0 && point.ss==0)
				{
					count++;
				}
			//cout<<i<<" "<<j<<endl;
		}
	}
	cout<<count;
	return 0;
}