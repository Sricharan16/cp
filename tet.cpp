#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int comp(int s,int f,int a[])
{	
	if(s==f)
		return 1;
	int m=a[s];
	for (int i = s; i <=f; ++i)
	{
		if(a[i]<=m)
			m=a[i];
	}
	for (int i = s; i <=f; ++i)
		a[i]=a[i]-m;
	int st=-1;
	int v=0;
	int ex=1;
	for (int i = s; i <=f; ++i)
	{
		if(a[i]!=0 && v==0)
		{
			st=i;
			v=1;
		}
		if(a[i]==0 && st!=-1)
		{
			ex=ex+comp(st,i-1,a);
			st=-1;
			v=0;
		}
		if(i==f && a[i]!=0)
			ex=ex+comp(st,i,a);
	}
	return min(ex,f-s+1);
}
 
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	cout<<comp(0,n-1,a)<<endl;
} 