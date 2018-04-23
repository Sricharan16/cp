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
	string s1,s2;cin>>s1>>s2;ll num1,num2;num1 = atoi(s1.c_str());
	string s=s1;ll num0;ll num3=atoi(s1.c_str());
	 num2 = atoi(s2.c_str());ll temp=0;ll maxi=0;
	 if(num1==num2){cout<<s2;return 0;}
	 if(num1<num2){
	 bool value=next_permutation(s.begin(), s.end());
	//cout<<s<<endl;
	num1 = atoi(s.c_str());
	while(num3!=num1){
	
	bool value=next_permutation(s.begin(), s.end());
	//cout<<s<<endl;
	num1 = atoi(s.c_str());
	
	if(num1<=num2)
		maxi=max(maxi,num1);;
	temp=maxi;
	}
	
	//bool value=prev_permutation(s.begin(), s.end());
	cout<<maxi<<endl;return 0;}
	if(num1>num2){
	 bool value=prev_permutation(s.begin(), s.end());
	//cout<<s<<endl;
	num1 = atoi(s.c_str());
	while(num3!=num1){
	
	bool value=prev_permutation(s.begin(), s.end());
	//cout<<s<<endl;
	num1 = atoi(s.c_str());
	
	if(num1<=num2)
		maxi=max(maxi,num1);
	}
	
	//bool value=prev_permutation(s.begin(), s.end());
	cout<<maxi<<endl;return 0;}
	
}