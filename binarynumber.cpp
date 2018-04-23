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
int arr[1000005];
vector <char> num;
charan
{
	fast;
	string str;
	cin>>str;ll count0=0;ll count1=0;
	if(str=="1")
	{
		cout<<"0";
		return 0;
	}
	for(int i=0;i<str.length();i++)
	{

		if(str[i]=='0')
			count0+=(i+1);
		else
			count1+=(i+1);
	}
	//cout<<count0<<" "<<count1<<endl;
	//cout<<min(count0,count1);	
	if(count1<count0)
		cout<<count1;
	else
		cout<<count0;
	return 0;
}