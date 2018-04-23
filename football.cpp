#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string str1,str2,str;
	int c1=0,c2=0;
	cin>>str1;c1=1;
	for (int i = 1; i < n; ++i)
	{
		cin>>str;
		if(str!=str1){str2=str;c2++;}
		else {c1++;}
		
	}
	if(c1>c2)
		cout<<str1;
	else
		cout<<str2;
	return 0;
}