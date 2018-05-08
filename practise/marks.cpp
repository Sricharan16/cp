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
	int n,m;cin>>n>>m;
	char ch;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>ch;
			a[i][j]=(int)(ch-'0');
		}
	}
	int maxi[m+1]={0};
	int maxim=0;
	for(int i=1;i<=m;i++){
		maxim=0;
		for(int j=1;j<=n;j++){
			maxim=max(maxim,a[j][i]);
		}
		maxi[i]=maxim;
		//cout<<maxi[i]<<" ";
	}//cout<<endl;
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(maxi[j]==a[i][j])
				{ans++;break;}
		}
	}
	cout<<ans;
	return 0;
}