#include<bits/stdc++.h>
using namespace std;
int main()

{	
	int n;string str;
	cin>>n;
	struct node{
		string a;int count=0;
	};
	node A[n];
	int j=1;
	map<string,int> seti;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		//cout<<seti[str];
		if(seti[str])
		{	
			A[seti[str]].count=A[seti[str]].count+1;
			cout<<str<<A[seti[str]].count-1<<endl;
		}
		else 
		{	seti[str]=j;
			//cout<<seti[str];
			A[seti[str]].a=str;
			A[seti[str]].count=1;j++;cout<<"OK"<<endl;
		}
	}
	return 0;
}