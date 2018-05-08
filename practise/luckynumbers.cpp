#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//long long n;cin>>n;
	long double c=1;
	for (int i = 1; i <=1000; ++i)
	{
		c=c*i;
	}
	cout<<fixed<<setprecision(0)<<c;
	return 0;
}