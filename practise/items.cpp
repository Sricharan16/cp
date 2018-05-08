#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,v;cin>>n>>v;int k; int t,flags=0;
	vector<int> a;
	for (int i = 0; i < n; ++i)
	{		
	   cin>>k;
	   flags=0;
	   for (int j = 0; j <k ; ++j)
	   	{
	   		cin>>t;
	   		if(t<v)
	   		flags=1;/* code */
	   	}	/* code */
	   			if(flags==1)
	   				a.push_back(i+1);
	}
	cout<<a.size()<<endl;
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}