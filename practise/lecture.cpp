#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	map<string,string> A;
	for(int i=0;i<m;i++)
	{
		string str1,str2;
		cin>>str1>>str2;
		A.insert(pair<string,string>(str1,str2));
	}
	for(int i=0;i<n;i++)
	{
		string str1;
		cin>>str1;
		if(A[str1].length()<str1.length())
			cout<<A[str1]<<" ";
		else 
			cout<<str1<<" ";
	}
	return 0;
}