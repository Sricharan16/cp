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
	int n;cin>>n;int x,y;int num=0;int dec=0;
	int oddup=0;int odddown=0;
	rep(i,n){
		cin>>x>>y;
		if(x%2==0 && y%2==1)
			odddown++;
		if(x%2==1 && y%2==0)
			oddup++;
		if((x%2==0 && y%2==0) || (x%2==1 && y%2==1))
		{
			num+=x;
		
		dec+=y;
		}
	}
	int mini=min(oddup,odddown);
	num+=(mini)*1;
	dec+=(mini)*1;
	oddup-=mini;
	odddown-=mini;
	if(num%2==0 && dec%2==0){
		if(odddown==0 && oddup>0)
		{
			if(oddup>1 && oddup%2==0)
				cout<<"0";
			else if(oddup>1 && oddup%2==1)
				cout<<"1";
			else
				cout<<"-1";
		}
		else if(odddown>0 && oddup==0)
		{
			if(odddown>1 && odddown%2==0)
				cout<<"0";
			else if(odddown>1 && odddown%2==1)
				cout<<"1";
			else
				cout<<"-1";
		}
		else
		{
			cout<<"0";
			return 0;
		}
	}
	else{
		if(odddown==0 && oddup>0)
		{
			if(oddup>1 && oddup%2==0)
				cout<<"1";
			else if(oddup>1 && oddup%2==1)
				cout<<"-1";
			else//
				cout<<"-1";
		}
		else if(odddown>0 && oddup==0)
		{
			if(odddown>1 && odddown%2==0)
				cout<<"1";
			else if(odddown>1 && odddown%2==1)
				cout<<"-1";
			else//
				cout<<"-1";
		}
		else
		{
			cout<<"-1";
			return 0;
		}
	}
	
	return 0;
}