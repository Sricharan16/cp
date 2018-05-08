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
	cin.tie(NULL);int n;int m=0,k;int sum=0;
cin>>n;cin>>k;int a[n];f(i,0,n)cin>>a[i];sort(a,a+n);
f(i,0,n)if(a[i]<0 && m<k){sum=sum+a[i];m++;}
cout<<abs(sum);
}