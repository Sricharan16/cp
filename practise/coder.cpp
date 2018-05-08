#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	string str1="C";
	string str2=".";
	for (int i = 0; i < n-1; ++i)
	{
		if(i%2==0)
			str1+=".";
		else
			str1+="C";
		if(i%2==0)
			str2+="C";
		else
			str2+=".";
	}
	cout<<ceil(float(n*n)/2)<<endl;
	for (int i = 0; i < n; ++i)
	{
		if(i%2==0)
			cout<<str1<<endl;
		else
			cout<<str2<<endl;

	}
	return 0;
}