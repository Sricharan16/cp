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
	string s1,s2;cin>>s1>>s2;ll num1,num2;
	ll num0;
	 num2 = atoi(s2.c_str());
	 int count=0;
	 string zeta;
	 f(i,0,s1.length()){if(s1[i]=='0')count++;else zeta=zeta+s1[i];}
	 num1 = atoi(zeta.c_str());
	 string s=zeta;
	 if(num1==num2){cout<<s2;return 0;}
	while(num1<=num2){
	num0 = atoi(s.c_str());
	bool value=next_permutation(s.begin(), s.end());
	num1 = atoi(s.c_str());
	if(num0>=num1)
		break;
	}
	bool value=prev_permutation(s.begin(), s.end());
	cout<<s;
	if(count!=0)
	f(i,0,count)cout<<"0";
	
}