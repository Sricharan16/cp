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
	ll a,b;cin>>a>>b;
	if(a==b)
		cout<<"1";
	else{
		if(b-a>=5)
			cout<<"0";
		else
		{
			if(b==a+1)
				cout<<(((a+1)%10))%10;
			else if(b==a+2)
				cout<<(((a+1)%10)*((a+2)%10))%10;
				else if(b==a+3)
					cout<<(((a+1)%10)*((a+2)%10)*((a+3)%10))%10;
					else if(b==a+4)
						cout<<(((a+1)%10)*((a+2)%10)*((a+3)%10)*((a+4)%10))%10;
		}
	}
	return 0;
}