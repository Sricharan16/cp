#include<iostream>
#include<string>
#include<vector>
// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	
	cin>>n;
	int sum=0;
	vector<int> a(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	sort(a.begin(),a.begin()+n);
	int sum1=0;
	for(int i=n-1;i>=0;i--)
		{
			sum1=sum1+a[i];
			if(sum1>sum-sum1)
			{
				cout<<n-i;
				break;
			}
		}
	return 0;
}