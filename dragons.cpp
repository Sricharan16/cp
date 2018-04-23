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
bool compare(pii &a,pii &b){
	if(a.first==b.first){
		return a.second>b.second;
	}
	return a.first<b.first;
}
charan
{
	fast;
	long long n,k;cin>>n>>k;
	pii score[k];
	rep(i,k){
		cin>>score[i].first>>score[i].second;
	}
	sort(score,score+k,compare);
	rep(i,k){
		//cout<<score[i].first<<" "<<score[i].second<<endl;
		//cout<<"#"<<n<<endl;
		if(n>score[i].first)
		{
			n=n+score[i].second;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}