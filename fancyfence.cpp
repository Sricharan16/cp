#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		if(p<60 || 360%p!=0)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;
	}
}