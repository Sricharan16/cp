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
ll arr[100005];
bool seive[4000000];
int used[4000001];
vi prime;
void calculate(int n){
	seive[1]=false;
	seive[2]=true;
	for(int i=2;i*i<=n;i++){
		if(seive[i]==true){
			//prime.pb(i);
			for(int j=2*i;j<=n;j+=i)
				seive[j]=false;
		}
	}
}
charan
{
	fast;
	ll n;
	cin>>n;
	ms0(seive,true);
	ms0(used,0);
	calculate(4000000);
	//f(i,1,301)if(seive[i]==true)prime.pb(i);
	//f(i,0,prime.size())cout<<prime[i]<<endl;
	ll brr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	//ms0(seive,true);
	f(i,1,n+1)
	{
		//cout<<"#"<<i<<" "<<seive[arr[i]]<<" "<<arr[i]<<endl;
			if(seive[arr[i]]==true && used[arr[i]]==0)
			{
				//cout<<"coming here"<<endl;
				brr[i]=arr[i];
				used[arr[i]]=1;
				for(int z=2;z<=sqrt(arr[i]);z++)
				{
					if(arr[i]%z==0)
						{
							used[z]=1;	
							used[arr[i]/z]=1;
						}
				}
				//used[arr[i]]=1;
				//cout<<arr[i]<<" "<<seive[arr[i]]<<endl;
			}
			else
			{
				//cout<<"here"<<arr[i]<<endl;
				int j=arr[i];
				//j++;
				for(;j<=4000000-1;j++)
				{
					if(seive[j]==true && used[j]==0)
						break;
				}
				brr[i]=j;
				used[j]=1;
				j=2;
				for(int k=i+1;k<=n;k++)
				{
					while(seive[j]!=true || used[j]!=0){
						j++;
					}
					if(seive[j]==true)
					{
						brr[k]=j;
						used[j]=1;
					}	
				}
				break;
			}
	}
	for(int i=1;i<=n;i++)
			cout<<brr[i]<<" ";
	return 0;
}