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
	int count=1;
	int maxi=0;
	int a=A[0].first,b=A[0].second;
	for (int i = 1; i < n; ++i)
	{
		if(A[i].first==a && A[i].second==b)
			{
				count++;
			}
				else
				{
					a=A[i].first;
					b=A[i].second;
					maxi=max(maxi,count);
					count=1;
				}
	}
	maxi=max(maxi,count);
	cout<<maxi;		
	return 0;
}