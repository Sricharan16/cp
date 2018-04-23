#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void foo(int t,int d,string str)
{
	int sz=str.size();
	vector <int> a;
	long long int to=1,pre=0;
	for (int i = 0; i < sz; ++i)
	{
		if(str[i]=='C')
		{
			a.push_back(i);
			to=to*2;
		}
		else
			pre=pre+to;
	}
	int csz=a.size();
	if(sz-csz>d)
	{
		cout<<"CASE #"<<t<<": "<<"IMPOSSIBLE\n";
		return;
	}
	if(pre<=d)
	{
		cout<<"CASE #"<<t<<": "<<"0\n";
		return;
	}
	int ns[csz];
	int count=0,p=csz-1;
	for (int i = str.size()-1; i>=0; --i)
	{
		if(str[i]=='S')
			count++;
		else 
		{//cout<<p<<endl;
			ns[p]=count;
			p--;
		}
	}
	int swaps=0;
	for (int i = csz-1; i>=0 ; --i)
	{
		if( (((pre-d-1)*2)/to)+1<=ns[i] )
		{
			swaps=swaps+((pre-d-1)*2/to)+1;
			break;
		}
		else 
		{
			swaps=swaps+ns[i];
			pre=pre-ns[i]*to/2;
			to=to/2;
		}
	}
	cout<<"CASE #"<<t<<": "<<swaps<<"\n";
}
int main()
{
	int n;
	cin>>n;
	int d[n];
	string str[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>d[i]>>str[i];
	}
	for (int i = 0; i < n; ++i)
	{
		foo(i+1,d[i],str[i]);
	}
}