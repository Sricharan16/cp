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
#define pqueue priority_queue< ll >
#define ff first
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,m,k;cin>>n>>m>>k;
	ll arr[m+2];
	f(i,1,m+2)cin>>arr[i];
	ll count=0;ll sum=0;
	f(i,1,m+1){
		int p=(arr[i]^arr[m+1]);
		//cout<<p<<endl;
		count=0;
		while(p>0)
		{
			//cout<<p<<endl;
			if(p%2==1)
				count++;
			p=p/2;
		}
		//cout<<"#"<<count<<endl;
		if(count<=k)
			sum++;
	}
	cout<<sum;
	return 0;
}