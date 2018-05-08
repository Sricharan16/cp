#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;cin>>n;
	string s;
	for (int i = 0; i < n; ++i)
		cout<<" "<<" ";
		cout<<"0"<<endl;
	for (int i = 0; i < n; ++i)
	{s=" ";
		for (int j = 1; j < n-i; ++j)
		{
			s=s+"  ";
		}
		for(int k=0;k<i+1;k++)
			s=s+to_string(k)+" ";
		for(int k=i+1;k>=0;k--)
			s=s+to_string(k)+" ";
		for(int b=1;b<s.length()-1;b++)
			cout<<s[b];
		cout<<endl;
	}
	//cout<<"done"<<endl;
	for (int i = n-1; i > 0; i--)
	{ s="  ";
		for (int j = 1; j < n-i; ++j)
		{
			s=s+"  ";
		}
		for(int k=0;k<i;k++)
			s=s+to_string(k)+" ";
		for(int k=i;k>=0;k--)
			s=s+to_string(k)+" ";
		for(int b=0;b<s.length()-1;b++)
				cout<<s[b];
		cout<<endl;
	}
	for (int i = 0; i < n; ++i)
		cout<<" "<<" ";
		cout<<"0";
	return 0;
}