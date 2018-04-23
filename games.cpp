#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	struct point{
		int x;
		int y;
	};
	point A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i].x>>A[i].y;
	}
	int count=0;
	for (int i = 0; i < n-1; ++i)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i].x==A[j].y)
				count++;
			if(A[i].y==A[j].x)
				count++;
		}
	}
	cout<<count;
	return 0;
}