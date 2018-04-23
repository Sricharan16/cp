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
#include <cstring>
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n;cin>>n;
	int count=1;char prev[50]="";
	char str[50]="Polycarp",x[50],y[50],z[50];int maxi=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y>>z;
		//count++;
		//char* ch1=strdup(z.c_str());
		///char* ch2=strdup(str.c_str());
		//char* ch3=strdup(prev.c_str());
		if(!strcasecmp(z,str))
		{
			maxi=max(count,maxi);
			count=2;
		}
		
		else if(!strcasecmp(z,prev))
		{
			count++;
		}
		else{

		}
		memcpy(prev,x,sizeof(x));
	}
	maxi=max(maxi,count);
	cout<<maxi;
	return 0;
}