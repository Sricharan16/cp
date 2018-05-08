#include<string>
#include<iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n>>s;
	int A[26]={0};
	for(int i=0;i<n;i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			A[s[i]-'A']++;
		}
		if(s[i]>=97 && s[i]<=122)
		{
			A[s[i]-'a']++;
		}
	}
	for(int i=0;i<26;i++)
	{
		if(A[i]==0)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}