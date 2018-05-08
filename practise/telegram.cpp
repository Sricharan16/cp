/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define tri pair<int,pii>
#define mod (1000*1000*1000+7)
#define moddd (1000*1000*1000+9)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair< ll,ll >
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vector <int>,greater< int > >
#define ff first
#define ss second
#define min(a,b) ((a<b)?(a):(b))
#define max(a,b) ((a>b)?(a):(b))
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);
charan
{
	fast;
	ll n,k;
	string str;
	cin>>n>>k;
	char arr[n+1][n+1];
	ll maxi=0;
	ll posx=0,posy=0;
	for(int i=1;i<=n;i++)
	{
		cin>>str;
		for(int j=0;j<str.length();j++)
			arr[i][j+1]=str[j];
	}
	int brr[n+1][n+1];
	ms0(brr,0);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int l=i;l<i+k && l<=n ;l++)
				{
					if(arr[l][j]=='#')
						break;
					if(l==i+k-1 && arr[l][j]=='.')
						{
							for(int p=i;p<i+k && p<=n ;p++)
								brr[p][j]++;
						}
				}
			for(int l=j;l<j+k && l<=n ;l++)
				{
					if(arr[i][l]=='#')
						break;
					if(l==j+k-1 && arr[i][l]=='.')
						{
							for(int p=j;p<j+k && p<=n ;p++)
								brr[i][p]++;
						}
				}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			//cout<<brr[i][j]<<" ";
			if(brr[i][j]>=maxi)
			{
				maxi=max(brr[i][j],maxi);
				posy=i;
				posx=j;
			}
		}
		//cout<<endl;
	}
	//cout<<endl;
	if(maxi!=0)
	cout<<posy<<" "<<posx;
else
	cout<<"1 1";
	return 0;
}