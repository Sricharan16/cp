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
charan{
	string s;
	int n; cin>>n;
	cin>>s;
	int c=0;
	int A[102]={0};
	f(i,0,s.length())
	{
		int count=0;
		if(s[i]=='B')
		{	c++;
			count=1;
			i++;
			//count++;
			while(s[i]=='B')
				{count++;i++;}
			A[i]=count;
		}
		
	}
	cout<<c<<endl;int j=1;
	f(i,0,101)
	if(A[i]!=0){cout<<A[i]<<" ";	j++;}

}