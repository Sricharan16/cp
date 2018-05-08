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
	cin.tie(NULL);int n;
	cin>>n;
	int A[n]={0};
	int B[n]={0};
	int C[n-1]={0};
	f(i,0,n)cin>>A[i];sort(A,A+n);
	f(i,0,n-1)cin>>B[i];sort(B,B+n-1);
	f(i,0,n-2)cin>>C[i];sort(C,C+n-2);
	f(i,0,n){if(B[i]!=A[i]){cout<<A[i]<<endl;break;}}
	f(i,0,n-1){if(C[i]!=B[i]){cout<<B[i];break;}}
	return 0;

}