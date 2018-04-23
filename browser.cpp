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
	cin.tie(NULL);int n,pos,l,r;
	cin>>n>>pos>>l>>r;
	int t1=0,t2=0;
	if(l==1 && r!=n)
	{
		cout<<abs(r-pos)+1;
		return 0;
	}
	else if(l!=1 && r==n)
	{
		cout<<abs(pos-l)+1;
		return 0;
	}
	else if(l!=1 && r!=n)
	{
		cout<<r-l+min(abs(pos-l),abs(r-pos))+2;
		return 0;
	}
	else if(l==1 && r==n)
	{
		cout<<"0";
		return 0;
	}
	return 0;
}