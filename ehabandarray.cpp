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
const int N =3e6;
int factor[N];
vi primes;
vi primedivisisors[N];
bool done[N];
void precalc(){
	for(int j=2;j*j<N;j++){
		if(!factor[j])
		{
			for(int k=j*j;k<N;k+=j)
			{
				factor[k]=j;
			}
		}
	}
	for(int i=2;i<N;i++)
	{
		if(!factor[i])
		{
			primes.pb(i);
			for(int j=i;j<N;j+=i)
			{
				primedivisisors[j].pb(i);	
			}
		}
	}
}
void add(int i){
	for(int p: primedivisisors[i])
		done[p]=1;
}
bool check(int i){
	for(int p: primedivisisors[i])
		if(done[p])
			return 0;
	return 1;
}
charan
{
	fast;
	precalc();
	ll n;cin>>n; ll x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(!check(x))
		{
			int alpha=i;
			
			for(int j=x+1;j<N;j++)
			{
				if(check(j))
					{
						cout<<j<<" ";
						add(j);
						alpha++;
						break;
					}

			}
			for(int i=2;i<N;i++)
			{
				if(alpha<=n)
				{
					if(check(i))
					{
						cout<<i<<" ";
						add(i);
						alpha++;
					}
				}
				else
					return 0;
			}

		}
		cout<<x<<" ";
		add(x);
		//cout<<"came here"<<" "<<check(x)<<endl;
	}
	// for(int p: primedivisisors[4])
	// 	cout<<p<<" "<<endl;
	//cout<<"ending";
	return 0;
}