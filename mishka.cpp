#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a,b;
	int c1=0,c2=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		if(a<b)
			c2++;
		if(a>b)
			c1++;
	}
	if(c1>c2)
		cout<<"Mishka";
	else if(c2>c1)
		cout<<"Chris";
	else
		cout<<"Friendship is magic!^^";
	return 0;
}