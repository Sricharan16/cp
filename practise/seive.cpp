/*I shall rise*/
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>b;i--)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);long long k;
	long long n,m;cin>>n>>k;long long z,y;
	long long arr[n+1];
	if(n==1){
		cin>>z>>y;
		cout<<z;
		return 0;
	}
	for(long long i=1;i<=n;i++)cin>>arr[i];

	
	long long sleep[n+1];
	for(ll i=1;i<=n;i++)cin>>sleep[i];
	if(n==k){
		long long sum=0;
	for(ll i=1;i<=n;i++){
			sum+=arr[i];
	}
		cout<<sum;
		return 0;
	}
	long long sum=0;
	for(ll i=1;i<=n;i++){
		if(sleep[i]==1)
			sum+=arr[i];
	}
	ll temp[n+1]={0};
//temp[1]=arr[1];
	temp[0]=0;
	for(ll i=1;i<=n;i++){
		if(sleep[i]==0)
		temp[i]=arr[i]+temp[i-1];
	else
		temp[i]=temp[i-1];
	}
	// for(ll i=1;i<=n;i++)cout<<temp[i]<<" ";
	// 	cout<<endl;
			
		ll maxi=0;
	for(ll i=1;i<n-k+1;i++){
		if(temp[i+k]-temp[i]>=maxi){
		maxi=max(maxi,temp[i+k]-temp[i]);
	}
	}
	//cout<<maxi<<" "<<x;
	
	cout<<sum+maxi;


	return 0;
}