#include<iostream>
#include<cmath>
// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;
struct pos{
	int value;
	int pos;
};
bool comp(struct pos a, struct pos b)
{
	return a.pos<b.pos;
}
#define IFOR(n) for(int i=0;i<n;i++)
int main()
{
int n; 
cin>>n;
int p;
int a[n];
IFOR(n)
{
	cin>>p;
	a[p-1]=i+1;
}
IFOR(n)
cout<<a[i]<<" ";
return 0;
}