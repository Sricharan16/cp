/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define ff first
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll kr=0,kb=0,ky=0,kg=0;
	string str;cin>>str;
	int count=0;
	vi index;int flag1=0,flag2=0,flag3=0,flag4=0;
	int l1,l2,l3,l4;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='!')
			index.pb(i);
		if(str[i]=='R' && flag1==0)
		{
			flag1=1;
			l1=i%4;
		}
		if(str[i]=='B' && flag2==0)
			{
			flag2=1;
			l2=i%4;
		}
		if(str[i]=='Y' && flag3==0)
			{
			flag3=1;
			l3=i%4;
		}
		if(str[i]=='G' && flag4==0)
			{
			flag4=1;
			l4=i%4;
		}
	}
	for(int i=0;i<index.size();i++)
	{
		if(index[i]%4==l1)
			{
				kr++;
			}
		if(index[i]%4==l2)
			{
				kb++;
			}
		if(index[i]%4==l3)
			{
				ky++;
			}
		if(index[i]%4==l4)
			{
				kg++;
			}
		
	}
	cout<<kr<<" "<<kb<<" "<<ky<<" "<<kg;
	return 0;
}