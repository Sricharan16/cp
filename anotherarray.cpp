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
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
ll arr[100005]={0};
bool prime(int x){
	if(x==1)
		return false;
	if(x==2)
		return 2;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}
bool seive[4000000];
void cal(int x){
	seive[1]=false;
	int p=x;
	if(seive[x]==false)
		return;
	
		if(seive[x]==true)
			for(int i=2*x;i*i<=4000000;i+=x)
				seive[i]=false;	
		seive[p]=false;
	}
	charan
	{
		fast;
		ll n;cin>>n;
		f(i,1,n+1)cin>>arr[i];
		ll brr[n+1];
		ms0(seive,true);
		f(i,1,n+1)
		{
			if(seive[arr[i]]==true)
			{
				brr[i]=arr[i];
				for(int z=2;z<=sqrt(arr[i]);z++)
				{
					if(arr[i]%z==0)
						{cal(z);	
							cal(arr[i]/z);}
				}
				cal(arr[i]);
				//cout<<arr[i]<<" "<<seive[arr[i]]<<endl;
			}
			else
			{
				int j=arr[i];
				j++;
				for(;j<=4000000-1;j++)
				{
					if(prime(j)==true && seive[j]!=false)
						break;
				}
				brr[i]=j;
				cal(brr[i]);
				j=2;
				for(int k=i+1;k<=n;k++)
				{
					while(seive[j]==false && j<=4000000-1){
						j++;
					}
					if(seive[j]==true)
					{
						brr[k]=j;
						cal(j);
					}	
				}
				break;
			}
		}
		for(int i=1;i<=n;i++)
			cout<<brr[i]<<" ";
		return 0;
	}