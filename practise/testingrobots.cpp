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
	ll x,y;cin>>x>>y;ll x0,y0;cin>>x0>>y0;
	ll count=x*y;
	ll sum=0;
	string str;cin>>str;
	ll ans[str.length()+1];
	ans[0]=1;
	count--;
	int flags[x+1][y+1];
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			flags[i][j]=0;
		flags[x0][y0]=1;
		for(int i=0;i<str.length();i++){
		//cout<<i<<" "<<x0<<" "<<y0<<endl;
			if(str[i]=='U' && x0!=1){
				x0--;
				if(flags[x0][y0]==0)
				{
					flags[x0][y0]=1;
					ans[i+1]=1;
					count--;
				}else
				{
					flags[x0][y0]=1;
					ans[i+1]=0;
					//count--;
				}

			}
			else if(str[i]=='D' && x0!=x ){
				x0++;
				if(flags[x0][y0]==0)
				{
					ans[i+1]=1;
					flags[x0][y0]=1;
					count--;
				}
				else
				{
					flags[x0][y0]=1;
					ans[i+1]=0;
					//count--;
				}
			}
			else if(str[i]=='R' && y0!=y){
				y0++;
				if(flags[x0][y0]==0)
				{
					ans[i+1]=1;
					flags[x0][y0]=1;
					count--;
				}
				else
				{
					flags[x0][y0]=1;
					ans[i+1]=0;
					//count--;
				}
			}
			else if(str[i]=='L' && y0!=1){
				y0--;
				if(flags[x0][y0]==0){
					ans[i+1]=1;
					flags[x0][y0]=1;
					count--;
				}
					else
					{
						flags[x0][y0]=1;
						ans[i+1]=0;
						//count--;
					}
				}
				else
				{
					ans[i+1]=0;
			//count--;
				}
			}
			ans[str.length()]+=count;
			for(int i=0;i<str.length()+1;i++)
				cout<<ans[i]<<" ";
			return 0;
		}