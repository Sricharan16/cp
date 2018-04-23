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
	int n,k;
	char a;
	cin>>n>>k;
	int pos1,pos2;
	f(i,0,n){cin>>a;if(a=='G')pos1=i;if(a=='T')pos2=i;}
	if(abs(pos1-pos2)%k==0)
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}