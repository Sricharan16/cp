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
	fast;int x,y;cin>>x>>y;
	int mini=101;int maxi=0;int t;int count=0;int minic=99999;
	rep(i,x){
		cin>>t;
		if(t>=maxi){
			count++;
		
		maxi=max(maxi,t);
	}minic=min(minic,t);
	}
	rep(i,y){
		cin>>t;
		mini=min(mini,t);
	}
	//cout<<"minic "<<minic<<" "<<"maxi "<<maxi<<endl;
	if(minic*2<=maxi && count<x && maxi<mini)
		cout<<maxi;
	else if( maxi<mini)
	{
		while(2*minic>maxi)
			maxi++;
		if(maxi<mini)
		cout<<maxi;
	else
		cout<<"-1";
	}
	else
		cout<<"-1";

	return 0;
}