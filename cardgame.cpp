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
	cin.tie(NULL);ll n;cin>>n;
	ll a[n];f(i,0,n)cin>>a[i];sort(a,a+n);ll k=a[n-1];ll count=1;
	fd(i,n-2,-1)
	{
		if(a[i]==k)
			count++;
		else
			break;
	}
	if(count%2==0)
		cout<<"Agasa";
	else 
		cout<<"Conan";
	return 0;
}