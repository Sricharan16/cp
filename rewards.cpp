#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a3;
	int b1,b2,b3;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	int n; cin>>n;
	int s1=ceil(float(a1+a2+a3)/5);
	int s2=ceil(float(b1+b2+b3)/10);
	//cout<<s1<<" "<<s2;
	if(s1+s2<=n)
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;		
}