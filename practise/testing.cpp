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
ll arr[100005]={0};
ll brr[100005]={0};
void trouble(ll n){
	bool done=false;
	while(!done){
		done = true;
      for(ll i= 0; i < n-2; i++){
        if(arr[i] > arr[i+2])
        {
          done=false;
          //reverse the sublist from L[i] to L[i+2], inclusive
          int temp=arr[i];
          arr[i]=arr[i+2];
          arr[i+2]=temp;
     	 }
      }
	}
}
charan
{
	fast;
	ll t;//cin>>t;
	//ll overall=t;

	//while(t--){
		ll n;cin>>n;
		arr[n]={0};
		//ll brr[n];
		f(i,0,n){cin>>brr[i];arr[i]=brr[i];}
		//sort(brr,brr+n);
		trouble(n);
		ll count=0;
		f(i,0,n)
		{
			// if(arr[i]!=brr[i])
			// 	{
			// cout<<"Case #"<<overall-t<<": "<<i<<endl;
			// count=1;
			//      break;}
			cout<<arr[i]<<" ";
		}
		

	//}
	return 0;
}