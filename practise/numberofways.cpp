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
	ll a[n];f(i,0,n){cin>>a[i];sum=sum+a[i];}
	if(sum%3!=0)
		{cout<<"0";return 0;}
	else
	{
		int k=sum/3;
		
		ll c1=0,c2=0;int sum1=0,sum2=0;
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<b[i]<<" "<<c[i]<<endl;
		// }cout<<endl;
		sum1=sum1+a[0];
			sum2=sum2+a[n-1];
			sum1=sum1+a[i];
			sum2=sum2+a[n-1-i];
		f(i,1,n-1)
		{
			if(i>=n-1-i)
				break;
			sum1=sum1+a[i];
			sum2=sum2+a[n-1-i];
			if(sum1==k)
				c1++;
			if(sum2==k)
				c2++;

		}cout<<c1*c2;
		// f(i,0,n)
		// {	sum1=sum1+a[i];
		// 	if(sum1<k)
		// 		continue;
		// 	else if(sum1==k)
		// 	{
		// 		fd(j,n-1,-1)
		// 		{
		// 			sum2=sum2+a[j];
		// 			if(sum2==k)
		// 			{
		// 				if(i+1<n-1 && j-1>0)
		// 				if(i+1<=j-1)
		// 				c1++;
		// 			}
		// 			if(i>j)
		// 				break;
		// 		}
		// 	}
		// 	else if(sum1>k)
		// 		break;
		// }//cout<<"HERE"<<endl;
		
		// cout<<c1;
	
	
}
}