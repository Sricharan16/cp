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
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
#define max(a,b) (a>b)?a:b
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
ll solve(double x,double m,double w)
{
	long double z=(250-m)*x-12500*w;
	return max(0.3*x,z/250);
}
charan
{
	fast;
	double m[6];
	f(i,1,6)cin>>m[i];
	double w[6];
	f(i,1,6)cin>>w[i];
	//cout<<solve(500,m[1],w[1])<<endl;
	double score=solve(500,m[1],w[1])+solve(1000,m[2],w[2])+solve(1500,m[3],w[3])+solve(2000,m[4],w[4])+solve(2500,m[5],w[5]);
	//cout<<score;
	double x,y;cin>>x>>y;
	score+=(100*x-50*y);
	cout<<score;
	return 0;
}