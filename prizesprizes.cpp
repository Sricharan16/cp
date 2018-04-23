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
	ll n;ll current=0;
	cin>>n;
	ll arr[n+1];
	f(i,1,n+1)cin>>arr[i];
	ll counta=0,countb=0,countc=0,countd=0,counte=0;
	ll cost[6]={0,0,0,0,0,0};
	f(i,1,6)cin>>cost[i];
	f(i,1,n+1){
		current=current+arr[i];
		//cout<<current<<endl;
		if(current>=cost[1])
		{
			if(current>=cost[5])
			{
				//cout<<"here";	
				counte+=(current/cost[5]);
				//cout<<counte
				current=current-((current/cost[5])*cost[5]);
			}
			if(current>=cost[4])
			{
				countd+=(current/cost[4]);
				current=current-((current/cost[4])*cost[4]);
			}
			if(current>=cost[3])
			{
				countc+=(current/cost[3]);
				current=current-((current/cost[3])*cost[3]);
			}
			if(current>=cost[2])
			{
				countb+=(current/cost[2]);
				current=current-((current/cost[2])*cost[2]);
			}
			if(current>=cost[1])
			{
				counta+=(current/cost[1]);
				current=current-((current/cost[1])*cost[1]);
			}
		}
	}
	cout<<counta<<" "<<countb<<" "<<countc<<" "<<countd<<" "<<counte<<endl;
	cout<<current;
	return 0;
}