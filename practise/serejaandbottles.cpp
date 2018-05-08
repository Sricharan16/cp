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
#define abs(x) x<0? (-x):x
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	int n;cin>>n;
	int a[n+1];
	int b[n+1];
	ll sum=0;
	rep(i,n){cin>>a[i+1]>>b[i+1];}
	f(i,1,n+1){
		f(j,1,n+1){
			//cout<<a[i]<<" "<<b[j]<<endl;
			if(j!=i){
				if(b[j]==a[i])
					{sum++;break;}
			}
		}
	}
	//cout<<sum;
	cout<<n-sum;
	return 0;
}