#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{ int n;
	int t;
	vector<int> a(n+1,0);
	cin>>n>>t;
	for (int i = 1; i <=n-1 ; ++i)
	{
		int p;
		cin>>p;
		a[i]=p;
	}
	int flags=0;
	int dist=0;
	int i=1,p;
	while(i<t)
	{
		i=i+a[i];

		//cout<<a[i]<<" ";
		if(i==t)
		{
			flags=1;
			break;
		}
	}
	if(flags==1)
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}