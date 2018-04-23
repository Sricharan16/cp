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
#define sz(a) a.size();
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	int x,y,z;
	cin>>x>>y>>z;
	int ans=2*min(x,y);
	int k=max(x,y)-min(x,y);
	//cout<<k<<endl;
	if(k<=z){
		ans=ans+k*2;
		if(z-k>0)
		{
			ans=ans+((z-k)/2)*2;
		}
	}
	else{
		//cout<<ans<<endl;
		//cout<<z*2<<endl;
		ans+=(z*2);
		//cout<<ans<<endl;
	}
	cout<<ans;
	return 0;
}