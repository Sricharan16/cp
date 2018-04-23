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
	int n,l;cin>>n>>l;
	int A[n];
	f(i,0,n){cin>>A[i];};sort(A,A+n);
	double maxi=0;
	f(i,1,n){if((double)(A[i]-A[i-1])/2>maxi)maxi=(double)(A[i]-A[i-1])/2;}
	//gdb(maxi);
	maxi=max(maxi,(double)A[0]);
	maxi=max(maxi,(double)l-A[n-1]);
	cout<<fixed<<setprecision(9)<<maxi;return 0;}