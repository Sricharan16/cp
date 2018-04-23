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
	int a,b,c,d,s1=0,s2=0;
	cin>>a>>b>>c>>d;
	s1=max(3*a/10,	a-((a*c)/250));s2=max(3*b/10,	b-((b*d)/250));
	if(s1>s2)cout<<"Misha";
	if(s1<s2)cout<<"Vasya";
	if(s1==s2)cout<<"Tie";
}