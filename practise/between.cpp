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
	cin.tie(NULL);string s;int n;
	cin>>n>>s;int c1=0,c2=0;
	f(i,0,s.length()){
		if(s[i]=='F')
			if(s[i+1]=='S')
			{
				
				c1++;
			}
		if(s[i]=='S')
			if(s[i+1]=='F')
			{
				
				c2++;
			}
	}
	if(c2>c1)
		cout<<"YES";
	else 
		cout<<"NO";
}