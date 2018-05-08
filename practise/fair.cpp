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
	cin.tie(NULL);int n,m;
	cin>>n>>m;string s;cin>>s;
	while(m>0)
	{
		int l,r;cin>>l>>r;char c1,c2;cin>>c1>>c2;
		f(i,l-1,r)
		{
			if(s[i]==c1)
				s[i]=c2;
		}
		m--;
	}
	cout<<s;
}