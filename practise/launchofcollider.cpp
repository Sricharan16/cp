/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair

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
	int n;
	cin>>n;
	set <int> seti;
	int arr[n];
	string str;cin>>str;
	rep(i,n){
		cin>>arr[i];
	}
	int mini=999999999;
	rep(i,n-1){
		if(str[i]=='R' && str[i+1]=='L')
			mini=min(mini,arr[i+1]/2-arr[i]/2);
	}
	if(mini==999999999){
		cout<<"-1";
	}
	else{
		cout<<mini;
	}
	return 0;
}