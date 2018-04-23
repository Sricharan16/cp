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
	ll n,k1,k2;cin>>n>>k1>>k2;
	ll a[n+1];
	ll b[n+1];
	ll diff[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){cin>>b[i];diff[i]=abs(b[i]-a[i]);}
	sort(diff+1,diff+n+1);
	int j=0;
	int counta=0;
	for(int i=1;i<=n;i++){
		if(diff[i]==0)
			counta++;
	}
	//cout<<counta<<endl;
	 j=k1+k2;int temp;
	for(int i=n;i>=1;i--){
		//cout<<"here";
		if(counta==n || j==0)
			break;
		//sort(diff+1,diff+n+1);
		if(j>0 && counta!=n && diff[i]!=0)
		{
			temp=diff[i];
			diff[i]--;
			if(diff[i]==0)
				counta++;
			j--;
		}

		if(diff[i-1]!=temp && j>0)
			i=n+1;	
		//f(i,1,n+1)cout<<diff[i]<<" ";cout<<endl;
	}
	
	ll sum=0;

	for(int i=1;i<=n;i++){
		sum+=(diff[i]*diff[i]);
	}
	if(j==0)
		cout<<sum;
	else{
		if((j)%2==0)
			cout<<sum;
		else
			cout<<sum+1;
	}
	return 0;
}