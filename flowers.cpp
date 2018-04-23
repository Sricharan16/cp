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
#define gdb(n) cout<<n<<"debug"<<endl;
charan{
	ll n;
	cin>>n;
	ll b[n];
	f(i,0,n)cin>>b[i];
	sort(b,b+n);
	ll mincount=1;
	ll maxcount=1;
	f(i,1,n){if(b[0]==b[i])mincount++;}
	//gdb(mincount);
	fd(i,n-2,-1){if(b[n-1]==b[i])maxcount++;}
	//gdb(maxcount);
	cout<<b[n-1]-b[0]<<" ";
	if(b[n-1]!=b[0])cout<<maxcount*mincount;
	else 
		cout<<n*(n-1)/2;return 0;

}