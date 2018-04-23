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
	int n;
	cin>>n;
	int mi,ma;
	int p=n/7;
	mi=p*2;ma=p*2;
	int k=n%7;
	if(k<3)
		ma=ma+k;
	else
		ma=ma+2;
	if(k>=6)
	mi=mi+7-k;
cout<<mi<<" "<<ma;
	

}