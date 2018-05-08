#include<iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int others=0;
	int black=0;
	char p;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>p;
			if(p=='B'||p=='W'||p=='G')
				black++;
			else 
				others++;
		}
	if(others!=0)
		cout<<"#Color";
	else 
		cout<<"#Black&White";
	return 0;
}