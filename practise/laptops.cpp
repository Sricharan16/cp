#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
struct node{
		int first;
		int second;
	};
bool comp(node a,node b)
{
  return a.first<b.first;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	
	node A[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i].first>>A[i].second;
	}
	sort(A,A+n,comp);
	int flags=0;
	for (int i = 1; i < n; ++i)
	{
		if(A[i].first>A[i-1].first && A[i].second<A[i-1].second)
			{
				flags=1;
				break;}
	}
	if(flags==0)
		cout<<"Poor Alex";
	else
		cout<< "Happy Alex";
	return 0;
}