#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
 	int n;
 	cin>>n; 
 	int c=n/100;
 	cout<<max(max(c*10+(n%10),n/10),n);
 	return 0;
 }