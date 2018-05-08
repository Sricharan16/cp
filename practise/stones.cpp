#include<iostream>
#include<string>
using namespace std;
int main()
{	int n;
	string s;
	cin>>n;
	cin>>s;
	int value=0;
	for(int i=0;i<s.length()-1;i++)
	{
if(s[i+1]==s[i])
	value++;
	}
	cout<<value;
	return 0;
}