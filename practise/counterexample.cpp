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
	ll l,r;
	cin>>l>>r;
	if(r-l<2)
		cout<<"-1";
	else{
		if(r-l=2){
			if(l%2==0){
				cout<<l<<" "<<l+1<<" "<<l+2;
			}
			else
				cout<<"-1";
		}
		else{
			if(l%2==0){
				cout<<l<<" "<<l+1<<" "<<l+2;
			}
			else
				cout<<l+1<<" "<<l+2<<" "<<l+3;
		}
	}
	return 0;
}