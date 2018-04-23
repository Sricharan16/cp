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
	int k,n,p;
	cin>>n;
	int total=0,mini=300;
	f(i,0,n){cin>>k>>p;
		if(p<mini){mini=p;total+=(p*k);}
			else total+=(mini*k);
	}cout<<total;
}