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
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n,m,k;cin>>n>>m>>k;
	ll arr[n+1][m+1];
	string str;
	string path="";
	f(i,1,n+1)
	{
		cin>>str;
		f(j,1,m+1)
		{
			arr[i][j]=str[j-1]-'0';
		}
	}

	int dp[n+1][m+1]={0};
	for(int i=1;i<=m;i++)
		dp[n][i]=arr[n][i];
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=m;j++){
			if(j-1>=1 && j+1<=m)
			{
				dp[i][j]=max(dp[i+1][j-1],dp[i+1][j+1])+arr[i][j];
				// if(dp[i][j]==dp[i+1][j-1]+arr[i][j])
				// {
				// 	path+="R";
				// }
				// else
				// {
				// 	path+="L";
				// }
			}
			else if(j-1>=1)
			{
				dp[i][j]=dp[i+1][j-1]+arr[i][j];
			}
		    else if(j+1<=m)
		    {
		    	dp[i][j]=dp[i+1][j+1]+arr[i][j];
		    }
		}

	}
	int maxi=0;
	// for(int i=1;i<=n;i++)
	// {
	// 	for(int j=1;j<=m;j++)
	// 		cout<<dp[i][j]<<" ";
	// 	cout<<endl;
	// }
	int pos=0;
	for(int i=1;i<=m;i++)
	{
		if(dp[1][i]%(k+1)==0)
			{maxi=max(maxi,dp[1][i]);
				pos=i;}
	}
	if(maxi==0)
		cout<<"-1";
	else
		{
			cout<<maxi<<endl;
			for(int i=2;i<=n;i++){
				//cout<<"#"<<pos<<endl;
				if(pos==m){
					path="R"+path;
						pos=pos-1;
				}
				else if(pos==1){
					path="L"+path;
					pos=pos+1;
				}
				else if(dp[i][pos+1]>dp[i][pos-1])
				{
					path="L"+path;
					pos=pos+1;
				}
				else if(dp[i][pos+1]<dp[i][pos-1])
					{
						path="R"+path;
						pos=pos-1;
					}
				else{
					//cout<<"came here";
				}
			}
			cout<<pos<<endl;
	cout<<path;
		}
	return 0;
}