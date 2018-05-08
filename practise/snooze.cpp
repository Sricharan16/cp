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
	cin.tie(NULL);int x;cin>>x;int count=0;
	int hh,mm;cin>>hh>>mm;
	if(hh%10==7 || mm%10==7)
	{
		cout<<"0";
		return 0;
	}
	while(hh%10!=7 && mm%10!=7)
	{
		if(mm-x<0)
			{hh=(((hh-1)%24)+24)%24;mm=mm-x+60;}
		else
			mm=mm-x;
		count++;
	}
	cout<<count;
}