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
#define min(a,b) (a<b)?a:b
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
 ll n;cin>>n;
 ll cost[n+1];ll type[n+1];
 f(i,1,n+1)cin>>cost[i];
 f(i,1,n+1)cin>>type[i];
 int mini=100005,sexy=100005,minia=100005;
 f(i,1,n+1){
 	if(type[i]==1)
 		mini=min(mini,cost[i]);
 	else if(type[i]==2)
 		minia=min(minia,cost[i]);
 	else
 		sexy=min(sexy,cost[i]);
 }
 if(mini+minia<=sexy){
 	cout<<mini+minia<<endl;
 }
 else
 	cout<<sexy;
	return 0;
}