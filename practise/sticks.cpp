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
	int A[10]={0};
	int t;
	set <int> s;
	f(i,0,6){cin>>t;A[t]++;}
	int flags=0;
	f(i,0,10){if(A[i]>=4)
		flags=1;}
		if(flags==0)
		{
			cout<<"Alien";
			return 0;
		}
	f(i,0,10){
		if(A[i]!=0 && A[i]!=4)
		{
			s.insert(i);
		}
	}
	if(s.size()==1)
	cout<<"Elephant";
	else 
	cout<<"Bear";
	return 0;	

}