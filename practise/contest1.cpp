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
	int n,a,b;
	cin>>n;
	int flags=0;
	string s;
	f(i,0,n){
		cin>>s>>a>>b;
		if(a>=2400 && b>a)
		{
				flags=1;
		}
	}
	if(flags==0)
		cout<<"NO";
	else 
		cout<<"YES";
}