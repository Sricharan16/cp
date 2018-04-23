#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;int count=0;int t;int sum=0;
	if(n%2==0){
		
		for (int i = 0; i < n; ++i)
		{
			cin>>t;
			sum+=t;
			if(t%2==0){
				count++;
			}
		}
		if(sum%2==0){
			cout<<count;
			return 0;
		}
		else
			{cout<<n-count;
				return 0;}
	}
	else{
		
		for (int i = 0; i < n; ++i)
		{
			cin>>t;
			sum+=t;
			if(t%2==1){
				count++;
			}
		}
		if(sum%2==0){
			cout<<n-count;
			return 0;
		}
		else
			{cout<<count;
				return 0;}

	}
	cout<<count;
	return 0;
}