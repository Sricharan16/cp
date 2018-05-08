#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n;
 cin>>n;
 int a[4]={0};
 int k;
 for(int i=0;i<n;i++)
 {
 	cin>>k;
 	a[k]++;
 }
 cout<<min(a[1],min(a[2],a[3]));
	return 0;
}