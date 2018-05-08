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
struct node{
	int be;
	int co;
};
charan
{
	int n;cin>>n;
	int p,q;
	cin>>p>>q;
	struct node A[n]={0};
	struct node B[n]={0};
	int a,b;char c;
	f(i,0,n){cin>>a>>b>>c;if(c=='C'){A[i].be=a;A[i].co=b;}if(c=='D'){B[i].be=a;B[i].co=b;}}


}