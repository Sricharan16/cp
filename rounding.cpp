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
	cin.tie(NULL);string s;
	cin>>s;
	if(s[s.length()-1]=='1'||s[s.length()-1]=='2'||s[s.length()-1]=='3'||s[s.length()-1]=='4'||s[s.length()-1]=='5'||s[s.length()-1]=='0')
		{s[s.length()-1]='0';cout<<s;return 0;}
	else
		{f(i,stoi(s),10+stoi(s))
			{
				if(i%10==0)
					{cout<<i;break;}
			}}
	return 0;
}