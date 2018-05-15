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
string add(string str)
{
	int carry=1;
	string newstr="";
	for(int i=str.length()-1;i>=0;i--)
	{
		
		if(str[i]=='1' && carry==1)
		{
			newstr=newstr+"0";
			carry=1;
		}
		else if(str[i]=='1' && carry==0)
		{
			newstr=newstr+"1";
			carry=0;
		}
		else if(str[i]=='0' && carry==1)
		{
			carry=0;
			newstr=newstr+"1";
		}
		else
		{
			newstr=newstr+"0";
			carry=0;
		}
		//cout<<"###"<<newstr<<endl;
	}
	//
	if(carry==1)
	{
		newstr=newstr+"1";
	}
	reverse(newstr.begin(),newstr.end());
	return newstr;
}
charan
{
	fast;
	string str;
	cin>>str;
	ll count=0;
	while(str!="1")
	{
		//cout<<endl<<str<<endl;
		if(str[str.length()-1]=='0')
		{
			int l=str.length();
			string str1=str.substr(0,l-1);
			// cout<<str1<<endl;
			// break;
			str=str1;
		}
		else
		{
			string str1=add(str);
			str=str1;
		}
		count++;
	}
	// str=add("10111");
	// cout<<str;
	cout<<count;
	return 0;
}