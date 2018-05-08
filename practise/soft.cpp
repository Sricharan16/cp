#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout<<min(min((l*k)/nl,(c*d)),p/np)/n;
	return 0;
}