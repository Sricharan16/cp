#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> p,n,z;
	long long nn,x;
	cin>>nn;
	for(int i=1;i<=nn;i++)
	{
		cin>>x;
		if(x>0)
			p.push_back(x);
		if(x==0)
			z.push_back(x);
		if(x<0)
			n.push_back(x);
	}
	if(n.size()%2==0)
	{
		cout<<"1"<<" ";
		for(int i=0;i<1;i++)
			cout<<n[i]<<" ";
		cout<<endl;
		cout<<p.size()+n.size()-2<<" ";
		for(int i=0;i<p.size();i++)
			cout<<p[i]<<" ";
		for(int i=1;i<n.size()-1;i++)
			cout<<n[i]<<" ";
		cout<<endl;
		cout<<z.size()+1<<" ";
		for(int i=0;i<z.size();i++)
			cout<<z[i]<<" ";
		cout<<n[n.size()-1];
		cout<<endl;
	}
	else
	{
		cout<<"1"<<" ";
		for(int i=0;i<1;i++)
			cout<<n[i]<<" ";
		cout<<endl;
		cout<<p.size()+n.size()-1<<" ";
		for(int i=0;i<p.size();i++)
			cout<<p[i]<<" ";
		for(int i=1;i<n.size();i++)
			cout<<n[i]<<" ";
		cout<<endl;
		cout<<z.size()<<" ";
		for(int i=0;i<z.size();i++)
			cout<<z[i]<<" ";
		cout<<endl;
	}
	return 0;
}