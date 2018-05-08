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
		int maxi=0;
		int n;cin>>n;
		int arr[n+1];
		f(i,1,n+1)cin>>arr[i];int mini=999999;
		if(n==3)
		{
			cout<<arr[3]-arr[1];
			return 0;
		}
		int a[n];
		f(i,2,n){
				maxi=0;int p=1;
				f(j,1,n+1)
				{
					if(j!=i)
					{
						
						a[p]=arr[j];
						//cout<<a[p]<<" ";
						p++;
					}
				}
				//cout<<endl;
				f(j,1,n-1)
				{
					//cout<<"#"<<a[j+1]-a[j]<<endl;
					maxi=max(maxi,a[j+1]-a[j]);
				}
				//cout<<"#";
				mini=min(mini,maxi);
		}
		cout<<mini;
		return 0;
	}