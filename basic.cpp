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
typedef pair<int,int> ip;
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);ll n;cin>>n;ll sum=0;
	ll a[n+1];f(i,1,n+1){cin>>a[i];sum=sum+a[i];}
	if(sum%3!=0)
		{cout<<"0";return 0;}
	else
	{
		ll k=sum/3;
		ll b[n+1];
		b[n]=0;ll sum1=0;ll c1=0;sum1=sum1+a[n];
		fd(i,n-1,0)
		{
			if(sum1==k)
				c1++;
			b[i]=c1;
			sum1=sum1+a[i];
			
		}
		// f(i,1,n+1)
		// {
		// 	cout<<b[i]<<" ";
		// }cout<<endl;
		sum1=0;sum1=sum1+a[1];c1=0;
		f(i,2,n)
		{
			if(sum1==k)
				c1+=b[i];
			sum1=sum1+a[i];
			//gdb(sum1);
			
		}
		cout<<c1;
	
	
}
}