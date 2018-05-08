#include<iostream>
#include<string>
using namespace std; 
int main()
{
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  int A[26]={0};
  int B[26]={0};
  for(int i=0;i<s1.length();i++)
  {
  	if(s1[i]>=65 && s1[i]<=90)
  		{int c=s1[i]-'A';
  	A[c]++;}
  }
  for(int i=0;i<s2.length();i++)
  {
  	if(s2[i]>=65 && s2[i]<=90)
  		{int c=s2[i]-'A';
  	A[c]++;}
  }
  for(int i=0;i<s3.length();i++)
  {
  	if(s3[i]>=65 && s3[i]<=90)
  		{int c=s3[i]-'A';
  	B[c]++;}
  }
  // for(int i=0;i<26;i++)
  // {
  // 	cout<<A[i]<<" ";
  // }
  // cout<<endl;
  // for(int i=0;i<26;i++)
  // {
  // 	cout<<B[i]<<" ";
  // }
  for(int i=0;i<26;i++)
  {
  	if(A[i]!=B[i])
  	{
  		cout<<"NO";
  		return 0;
  	}
  }
  cout<<"YES";
  return 0;
  



}