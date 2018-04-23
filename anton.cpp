#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	char s[1001];
	cin.getline(s,sizeof(s));
	int A[26]={0};
	int length=0;
	for(int i=0;i<1001;i=i+1)
	{
		if(s[i]=='\0')
		{
			break;
		}

		length++;
	}
	//cout<<length<<endl;
	for(int i=1;s[i]!='}'&& i<=12;i=i+3)
	{
		//cout<<s[i]<<" ";
		if(s[i]>=97 && s[i]<=122)
		A[s[i]-97]++;
	}
	int count=0;
	for(int i=0;i<26;i++)
	{		
		if(A[i]!=0)
			count++;
	}
	cout<<count;
	return 0;
}