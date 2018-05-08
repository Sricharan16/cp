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
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	string str;cin>>str;
	vi aa,bb,cc;
	// for(int i=0;i<str.length();i++){
	// 	if(str[i]=='a')
	// 		aa.pb(i+1);
	// 	if(str[i]=='b')
	// 		bb.pb(i+1);
	// 	if(str[i]=='c')
	// 		cc.pb(i+1);
	// }
	 int counta=0,countb=0,countc=0;
	// for(int i=0;i<sz(aa);i++){
	// 	if(aa[i]==i+1)
	// 		counta++;
	// }
	// for(int i=0;i<sz(bb);i++){
	// 	if(bb[i]=i+1+counta)
	// 		countb++;
	// }
	// int index=0;
	// for(int i=0;i<str.length();i++)
	// {
	// 	if(str[i]=='c')
	// 	{
	// 		index=i;
	// 		break;
	// 	}
	// }
	// for(int i=0;i<sz(cc);i++){
	// 	if(cc[i]=i+1+index)
	// 		countc++;
	// }
	int i;
	for(i=0;i<str.length();i++){
		if(str[i]=='a')
			counta++;
		else 
			break;
	}
	for(i=0;i<str.length();i++){
		if(str[i]=='b')
			break;
			
	}
	for(;i<str.length();i++){
		if(str[i]=='b')
			countb++;
		else 
			break;
	}
	for(;i<str.length();i++){
		if(str[i]=='c')
			break;
			
	}
	for(;i<str.length();i++){
		if(str[i]=='c')
			countc++;
		else 
			break;
	}
	if(counta+countb+countc==str.length() && (counta>0 || countb>0) && (countc==counta || countc==countb) && str!="")
		cout<<"YES";
	else 
		cout<<"NO";   
	return 0;
}