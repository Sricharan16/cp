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
charan{
	string s;
	cin>>s;
	int p=s.length()/2;
	int count=0;
	if(s.length()==1)
	{
		cout<<"YES";
		return 0;
	}
	f(i,0,p)
	{
		if(s[i]!=s[s.length()-1-i])
			count++;
		
	}
	if(count==0 && s.length()%2==1)
		{cout<<"YES";return 0;}
	if(count==1 )
				{cout<<"YES";return 0;}
	cout<<"NO";
	return 0;
}						