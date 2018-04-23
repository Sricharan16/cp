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
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
#define pq priority_queue
//#include <queue>
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,k1,k2;cin>>n>>k1>>k2;
	ll a[n+1];
	ll b[n+1];
	ll diff[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){cin>>b[i];diff[i]=abs(b[i]-a[i]);}
	pq<int> dada;
	for(int i=1;i<=n;i++)dada.push(diff[i]);
	int l=k1+k2;
	for(int j=k1+k2;j>=1;j--){
		if(dada.top()==0)
			break;
		else
		{
			int peta=dada.top();
			dada.pop();
			dada.push(peta-1);
			l--;
		}
	}
	ll sum=0;
	for(int i=1;i<=n;i++){
		{sum+=(pow(dada.top(),2));dada.pop();}
	}
	if(l==0)
		cout<<sum;
	else{
		if((l)%2==0)
			cout<<sum;
		else
			cout<<sum+1;
	}
	return 0;
}