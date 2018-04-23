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
#define f(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>b;i--)
charan{
	int n;
	cin>>n;
	int a[n];
	f(i,0,n)cin>>a[i];
	int temp=0,energy=0,dollars=0;
	f(i,0,n-1)
	{
		temp=a[i]-a[i+1];
		energy=energy+temp;
		if(energy<0)
		{
			dollars=dollars+abs(energy);
			energy=0;
		}
	}
	cout<<dollars+a[0];

}