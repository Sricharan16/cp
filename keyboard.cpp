#include<bits/stdc++.h>
#define mp make_pair
#include<map>	
using namespace std;
int main(int argc, char const *argv[])
{	vector <string> a[3];
	map <char,int> mapi;
	char ch;
	cin>>ch;
	char array[30]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
	for(int i=0;i<30;i++)mapi.insert(mp(array[i],i));
// 	string str="qwertyuiop";
// 	for(int i=0;i<str.length();i++)
// 	a[0].push_back(str[i]);
// str="asdfghjkl;";
// str="zxcvbnm,./"
	string s;
	cin>>s;
	if(ch=='L')
	{
		for(int i=0;i<s.length();i++)
		{
			cout<<array[mapi[s[i]]+1];
		}
	}
	else 
	{
		for(int i=0;i<s.length();i++)
		{
			cout<<array[mapi[s[i]]-1];
		}
	}
	return 0;
}