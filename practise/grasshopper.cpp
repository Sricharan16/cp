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
	string s;
	cin>>s;
	vi a;
	int pos=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
		{
			a.pb(i+1-pos);
			pos=i+1;
		}
	}
	a.pb(s.length()+1-pos);
	int maxi=a[0];
	for(int i=0;i<a.size();i++)
	{
		if(a[i]>maxi)
			maxi=a[i];
		// cout<<a[i]<<" ";
	}
	cout<<maxi;
	return 0;
}