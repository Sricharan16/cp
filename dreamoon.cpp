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
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,m;cin>>n>>m;
	if(n<m){
		cout<<"-1";
		return 0;
	}
	ll num2=n/2;
	ll num1=n- (n/2)*2;
	ll total=num2+num1;
	for(;total<=n && num2>=0;){
		//cout<<num2<<" "<<num1<<endl;
		if(total%m==0){
			cout<<total;
			return 0;
		}
		else{
			num2-=1;
			num1+=2;
			total=num2+num1;
		}
	}
	return 0;
}