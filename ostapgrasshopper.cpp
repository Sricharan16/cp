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
	cin.tie(NULL);ll n,k;cin>>n>>k;
	ll gpos,tpos;string s;cin>>s;
	f(i,0,s.length()){
		if(s[i]=='G')
			gpos=i;
		if(s[i]=='T')
			tpos=i;
	}
	if(gpos<tpos)
	{
		for (int i = gpos; i < tpos+1; i=i+k)
		{
			if(s[i]=='#')
			{
			cout<<"NO";return 0;}/* code */
			if(s[i]=='T')
				{cout<<"YES";return 0;}
		}
		cout<<"NO";return 0;
	}
	else
	{
		for (int i = gpos; i >= tpos; i=i-k)
		{
			if(s[i]=='#')
			{
			cout<<"NO";return 0;}/* code */
			if(s[i]=='T')
				{cout<<"YES";return 0;}
		}
		cout<<"NO";return 0;

	}
}