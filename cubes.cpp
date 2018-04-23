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
	f(i,1,10000){
		if(((i)*(i+1)*(i+2)/6)==n)
		{
			cout<<i;
			return 0;
		}
		if(((i)*(i+1)*(i+2)/6)>n)
		{
			cout<<i-1;
			return 0;
		}
	}
	return 0;
}