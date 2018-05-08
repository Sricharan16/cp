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
#define f(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>b;i--)
charan
{
	ll n,a,b;
	cin>>n;
	ll ab[n];
	ll sum=0;
	f(i,0,n){cin>>a;sum=sum+a;}
	f(i,0,n){cin>>b;ab[i]=b;}
	sort(ab,ab+n);
	if(sum>(ab[n-1]+ab[n-2]))
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}