#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	if(n<=5)
		cout<<"-1"<<endl;
	else
	{
		cout<<"1 2"<<endl;
		cout<<"1 3"<<endl;
		cout<<"3 4"<<endl;
		cout<<"3 5"<<endl;
		
		for(int i=6;i<=n;i++){
			cout<<"1 "<<i<<endl;
		}
	}
	for(int i=2;i<=n;i++)
	{
		cout<<"1 "<<i<<endl;
	}
	return 0;
}