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
#define ff first
#define ss second
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	int n;cin>>n;
	pii points[n];int x,y;
	rep(i,n){
		cin>>x>>y;
		points[i].ff=x;
		points[i].ss=y;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		int up=0,down=0,left=0,right=0;
		for(int j=0;j<n;j++){
			if(points[j].ff>points[i].ff && points[j].ss==points[i].ss)
				right++;
			else if(points[j].ff<points[i].ff && points[j].ss==points[i].ss)
				left++;
			else if(points[j].ff==points[i].ff && points[j].ss<points[i].ss)
				down++;
			else if(points[j].ff==points[i].ff && points[j].ss>points[i].ss)
				up++;
		}
		if(right>0 && up>0 && down>0 && left>0)
			ans++;
	}
	cout<<ans;
	return 0;
}