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
char arr[502][502];
int flags=0;
struct point
{
	int x;
	int y;
};
void DFS(int x,int y,int p,int q){
	if(arr[x][y]=='X' || arr[x][y]=='0')
		return;
	else
	{
		arr[x][y]=='X';
		if(x==p && y==q)
			{	flags=1;
				return; }
		else
		{
			cout<<"reached";
			if(arr[x-1][y]!='X' && arr[x-1][y]!='0')
			DFS(x-1,y,p,q);
			if(arr[x+1][y]!='X' && arr[x-1][y]!='0')
			DFS(x+1,y,p,q);
			if(arr[x][y-1]!='X' && arr[x-1][y]!='0')
			DFS(x,y-1,p,q);
			if(arr[x][y+1]!='X' && arr[x-1][y]!='0')
			DFS(x,y+1,p,q);
		}
		
	}
}
charan
{
	fast;
   ll n,m;cin>>n>>m;
   //char arr[n+1][m+1];
   f(i,1,n+2){arr[i][0]='0';arr[i][m+1]='0';}
   f(i,1,m+2){arr[0][i]='0';arr[n+1][i]='0';}
   string str;
   f(i,1,n+1){cin>>str;f(j,1,m+1)arr[i][j]=str[j-1];}//input
   point s;point e;cin>>s.x>>s.y>>e.x>>e.y;
   DFS(s.x+1,s.y,e.x,e.y);
   DFS(s.x,s.y+1,e.x,e.y);
   DFS(s.x-1,s.y,e.x,e.y);
   DFS(s.x,s.y-1,e.x,e.y);
   if(flags==1)
   	cout<<"YES";
   else 
   	cout<<"NO";
	return 0;
}