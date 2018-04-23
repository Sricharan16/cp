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
	float a,b,d,e,f,mini=999999999;
	cin>>a>>b;
	int n;cin>>n;
	f(i,0,n){
		cin>>d>>e>>f;
		mini=min(mini,sqrt((d-a)*(d-a)+(e-b)*(e-b))/f);
	}
	cout<<fixed<<setprecision(6)<<mini;

}