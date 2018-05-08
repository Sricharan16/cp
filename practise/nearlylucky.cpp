#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long int count =0;
	for(long long int i=0;i<s.length();i++)
	{
		if(s[i]=='4'||s[i]=='7')
			count++;
	}
	if(count==4 || count==7)
		cout<<"YES";
	else 
		cout<<"NO";
}