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
#define min(a,b) ((a<b)? a:b)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	int n;cin>>n;
	int arr[n+1];
	f(i,1,n+1)cin>>arr[i];
	ll sum=0;
	int rows[n+1];
	f(i,1,n+1)
	{
		if(min(n,arr[i])>i)
			rows[i]=(min(n,arr[i])-i);
		else
			rows[i]=0;
		cout<<rows[i]<<" ";
	}
	cout<<"#"<<endl;
	int cols[n+1]={0};
	f(i,1,n+1){
		cols[1]++;
		cols[min(i,arr[i]+1)]--;
	}
	f(i,2,n+1){
		cols[i]+=cols[i-1];
	}
	f(i,1,n+1){
		cout<<cols[i]<<" ";
	}
	cout<<endl;
	f(i,1,n+1){
		sum+=min(rows[i],cols[i]);
	}
	cout<<sum;
	return 0;
}