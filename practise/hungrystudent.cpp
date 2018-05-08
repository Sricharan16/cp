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
	cin.tie(NULL);int n;cin>>n;
	while(n>0)
	{
		int k,count=0;cin>>k;
		for(int i=0;i<=100/3;i++)
			for(int j=0;j<=100/7;j++)
				if(3*i+7*j==k)count++;
			if(count>0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
			n--;
	}
}