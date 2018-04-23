#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,k;cin>>n>>m>>k;
	vector <int> ogi;int t;int mini=1500;
	for (int i = 1; i < n+1; ++i)
	{
		cin>>t;
		if(t!=0 && t<=k){
			ogi.push_back(i);
		}
	}
	for(int i=0;i<ogi.size();i++){
		if(ogi[i]>=m){
			mini=min(mini,(ogi[i]-m)*10);
		}
		else{
			mini=min(mini,(m-ogi[i])*10);
		}
	}
	cout<<mini;
	return 0;
}