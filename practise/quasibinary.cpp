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
	ll n;cin>>n;
	string str=to_string(n);
	int l=str.length();
	int maxi=0;
	for(int i=0;i<l;i++)
	{
		maxi=max(maxi,str[i]-'0');
	}
	cout<<maxi<<endl;
	vi numbers;
	int arr[7]={0,0,0,0,0,0,0};
	int j=6;ll num=n;
	while(num>0){
		arr[j]=num%10;
		num=num/10;
		j--;
	}
	for(int i=1;i<=maxi;i++){
		num=0;
		if(arr[0]>0)
		{
			num+=pow(10,6)
			arr[0]--;
		}
		if(arr[1]>0)
		{
			num+=pow(10,5)
			arr[1]--;
		}
		if(arr[2]>0)
		{
			num+=pow(10,4)
			arr[2]--;
		}
		if(arr[3]>0)
		{
			num+=pow(10,3)
			arr[3]--;
		}
		if(arr[4]>0)
		{
			num+=pow(10,2)
			arr[4]--;
		}
		if(arr[5]>0)
		{
			num+=pow(10,1)
			arr[5]--;
		}
		if(arr[6]>0)
		{
			num+=pow(10,0)
			arr[6]--;
		}
		numbers.pb(num);
	}
	for(int i=0;i<numbers.size();i++)
		cout<<numbers[i]<<" ";
	return 0;
}