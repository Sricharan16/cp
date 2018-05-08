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
	int n;
	cin>>n;
	int a[1001]={0},t,count=0;
	set <int> ai;
	int max=0;
	for(int i=0;i<n;i++)
		{cin>>t;ai.insert(t);a[t]++;}
	//set<int> s;
	for(int i=0;i<1001;i++){
		if(a[i]>count)
			count=a[i];
		//s.insert(a[i]);
	}
	cout<<count<<" "<<ai.size();

}