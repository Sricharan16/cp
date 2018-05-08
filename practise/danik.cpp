#include<iostream>
#include<string>
using namespace std; 
int main()
{
	string s;
	int n;
	cin>>n;
	cin>>s;
	int counta=0,countb=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A')
			counta++;
		else
			countb++;
	}
	if(counta<countb)
		cout<<"Danik";
	else if(counta>countb)
		cout<<"Anton";
	else 
		cout<<"Friendship";
	return 0;
}