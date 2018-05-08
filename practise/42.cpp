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
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
string lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   int index = L[m][n];
   char lcsi[index+1];
   lcsi[index] = '\0';
   int i = m, j = n;
   while (i > 0 && j > 0)
   {
      if (X[i-1] == Y[j-1])
      {
          lcsi[index-1] = X[i-1]; 
          i--; j--; index--;     
      }
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
   string str="";
   for(int i=0;lcsi[i]!='\0';i++)
   {
   	str=str+lcsi[i];
   }
  // cout<<str<<endl;
 	return str;
}
charan
{
	fast;
	ll arr[100000];
	 char* a; char* b;
	for(int i=1;i<=100000;i++)
		arr[i]=i*i;
	ll n;cin>>n;
	string compi=to_string(n);
	 a = (char *)alloca(compi.size() + 1);
    memcpy(a, compi.c_str(), compi.size() + 1);
	long l=compi.length();
	int j=sqrt(n)+1;
	for(;j>=1;j--)
	{
		string temp=to_string(arr[j]);
		 b = (char *)alloca(temp.size() + 1);
    memcpy(b, temp.c_str(), temp.size() + 1);
		if(lcs(b,a,temp.length(),l)==temp)
		{
			//cout<<temp;
			cout<<compi.length()-temp.length();
			return 0;
		}
	}
	cout<<"-1";
	
	return 0;
}