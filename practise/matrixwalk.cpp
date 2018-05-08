#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	set <int>seti;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
		int flags=0;
	if(n==1){
		cout<<"YES"<<endl;
		cout<<a[0]<<" "<<a[0];
		return 0;

	}
	
	for(int i=0;i<n-1;i++){
		seti.insert(abs(a[i+1]-a[i]));
		if(a[i+1]==a[i])
		{
			cout<<"NO";
			return 0;
		}

	}
	if(seti.size()==2 || n==2)
	{
		cout<<"YES"<<endl;
		flags=1;
	}
	int maxi=0;
	set<int>:: iterator it;
 for( it = seti.begin(); it!=seti.end(); ++it){
 	//cout<<*it<<endl;
   maxi=max(maxi,*it);
   // cout << ans << endl;
 }
 if(flags==0)cout<<"NO";
 else
	cout<<maxi<<" "<<maxi;
	return 0;
}