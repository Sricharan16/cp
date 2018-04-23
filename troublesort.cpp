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
charan
{
	fast;
	ll t;cin>>t;
	ll overall=t;

	while(t--){
		ll n;cin>>n;
		arr[n]={0};
		ll brr[n];
		f(i,0,n){cin>>brr[i];arr[i]=brr[i];}
		if(n%2==0){
			int c[n/2];
			int d[n/2];
			int j=0;int k=0;
			f(i,0,n){
				if(i%2==0)
				{
					c[j]=arr[i];
					j++;
				}
				else{
					d[k]=arr[i];
					k++;
				}
			}
			sort(c,c+(n/2));
			sort(d,d+(n/2));
			j=0;k=0;
			f(i,0,n){
				if(i%2==0){
					arr[i]=c[j];j++;
				}
				else
				{
					arr[i]=d[k];k++;
				}
			}
		}
		else{
			int c[(n/2)+1];
			int d[n/2];
			int j=0;int k=0;
			f(i,0,n){
				if(i%2==0)
				{
					c[j]=arr[i];
					j++;
				}
				else{
					d[k]=arr[i];
					k++;
				}
			}
			sort(c,c+(n/2)+1);
			sort(d,d+(n/2));
			j=0;k=0;
			f(i,0,n){
				//cout<<"##"<<j<<"#";
				if(i%2==0){
					arr[i]=c[j];j++;
				}
				else
				{
					arr[i]=d[k];k++;
				}
			}
		}
		// f(i,0,n){
		// 	cout<<arr[i]<<" ";
		// }cout<<"#"<<endl;
		sort(brr,brr+n);
		//trouble(n);
		ll count=0;
		f(i,0,n)
		{
			if(arr[i]!=brr[i])
				{
			cout<<"Case #"<<overall-t<<": "<<i<<endl;
			count=1;
			     break;}
			//cout<<brr[i]<<" ";
		}
		if(count==0)
			cout<<"Case #"<<overall-t<<": "<<"OK"<<endl;

	}
	return 0;
}