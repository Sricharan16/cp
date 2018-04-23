#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int remain=240-k;
	if(remain==0)
	{
		cout<<"0";
		return 0;
	}
	int count=0;
	int i=1;
	while(remain>=0)
	{
		remain=remain-5*i;
		i++;
			}
			if(i-2>n)
			cout<<n;
		else
			cout<<i-2;
	return 0;
}