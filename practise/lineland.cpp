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
charan
{
	int n;
	cin>>n;
	int a[n];
	f(i,0,n)cin>>a[i];
	cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
	f(i,1,n-1)
	{
		cout<<min(abs(a[i]-a[i-1]),abs(a[i+1]-a[i]))<<" ";
		cout<<max(abs(a[i]-a[0]),abs(a[n-1]-a[i]))<<endl;
		
	}
	cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0];
	return 0;
}