#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;string str,str1;int num,check=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>str;cin>>num;
		if(num>check)
		{
			str1=str;check=num;
		}
		
	}
	cout<<str1;
	return 0;
}