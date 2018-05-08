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
	char a[5][5];string str;
	f(i,1,5){cin>>str;f(j,1,5)a[i][j]=str[j-1];}
	f(i,1,4){
		f(j,1,4){
			int count=0;
			if(a[i+1][j]=='#')
				count++;
			if(a[i][j+1]=='#')
				count++;
			if(a[i+1][j+1]=='#')
				count++;
			if(a[i][j]=='#')
				count++;
			//cout<<count;
			if(abs(4-count)==0 || abs(4-count)==1)
			{
				cout<<"YES";
				return 0;
			}
		 count=0;
			if(a[i+1][j]=='.')
				count++;
			if(a[i][j+1]=='.')
				count++;
			if(a[i+1][j+1]=='.')
				count++;
			if(a[i][j]=='.')
				count++;
			//cout<<count;
			if(abs(4-count)==0 || abs(4-count)==1)
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}