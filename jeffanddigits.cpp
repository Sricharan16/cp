#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;int count0=0;int count5=0;int t;
	for (int i = 0; i < n; ++i)
	{
	cin>>t;
	if(t==0)
		count0++;
	else
		count5++;
	}
	if(count0==0){
		cout<<"-1";
		return 0;
	}
	if((count5/3)*3==0)
	{
		cout<<"0";
		return 0;
	}
	
	for(int i=1;i<=(count5/3)*3;i++){
		cout<<"5";
	}
	//cout<<count0<<endl;
	for(int i=1;i<=count0;i++){
		cout<<"0";
	}
	return 0;
}