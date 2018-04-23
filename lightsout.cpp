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
#define pqueue priority_queue< ll >
#define ff first
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	int a[5][5];
	f(i,0,5)f(j,0,5)a[i][j]=1;
	int op[5][5];
	op[0][0]=0;
	op[0][1]=0;
	op[0][2]=0;
	op[0][3]=0;
	op[0][4]=0;
	op[4][0]=0;
	op[4][1]=0;
	op[4][2]=0;
	op[4][3]=0;
	op[4][4]=0;
	op[1][0]=0;
	op[2][0]=0;
	op[3][0]=0;
	op[1][4]=0;
	op[2][4]=0;
	op[3][4]=0;
	f(i,1,4)
	{
		f(j,1,4)
		{
			cin>>op[i][j];
		}
	}
	f(i,1,4)
	{
		f(j,1,4)
		{
			//cout<<i<<" "<<j<<endl;
			//cout<<(op[i][j]+op[i-1][j]+op[i][j+1]+op[i+1][j]+op[i][j-1])<<endl;
			if((op[i][j]+op[i-1][j]+op[i][j+1]+op[i+1][j]+op[i][j-1])%2==0)
			{

			}
			else
			{
				a[i][j]=0;
			}
	   }
	}
	f(i,1,4)
	{
		f(j,1,4)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}

	return 0;
}