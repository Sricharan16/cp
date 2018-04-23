/*I shall rise*/
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>b;i--)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
bool compare(pair <int,int> p1,pair <int,int> p2){
	if(p1.first<p2.first)
		return p1.first<p2.first;
	else if(p1.first==p2.first)
		return p1.second<p2.second;
}
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;cin>>n;
	pair <int,int> p[4];
	for(int j=0;j<4;j++){
		char a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			cin>>a[i][k];
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			if((i+k)%2==0){
				if(a[i][k]!='1')
					sum++;
			}
			else
			{
				if(a[i][k]!='0')
					sum++;
			}
		}
	}
	p[j].first=sum;

	sum=0;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			if((i+k)%2==0){
				if(a[i][k]!='0')
					sum++;
			}
			else
			{
				if(a[i][k]!='1')
					sum++;
			}
		}
	}
	p[j].second=sum;

}
sort(p,p+4);
cout<<min(p[0].first+p[1].first+p[2].second+p[3].second,p[2].first+p[3].first+p[0].second+p[1].second);

	return 0;
}