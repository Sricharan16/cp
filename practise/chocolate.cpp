#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	int temp;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		if (temp==1)
		v.push_back(i);
	}
	if(v.size()==0)
		cout<<"0";
	else if(v.size()==1)
		cout<<"1";
	else
	{
		int sum=1;
		for(int i=1;i<v.size();i++)
		{
			sum*=(v[i]-v[i-1]);
		}
		cout<<sum;
	}
	return 0;
}