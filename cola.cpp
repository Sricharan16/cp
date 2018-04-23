#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int k=1;
	long long int h=1,j=5;
	for (; ;)
	{
		if(n>=h && n<=j)
		{
			break;
		}
		else
		{
			long long int l=h;
			h=j+1;
			
			j=(j-l+1)*2+j;
		}
	}
	if(n<=(h-1)+(1*((j-h+1)/5)))
		cout<<"Sheldon\n";
	else if(n<=(h-1)+(2*((j-h+1)/5)))
		cout<<"Leonard\n";
	else if(n<=(h-1)+(3*((j-h+1)/5)))
		cout<<"Penny\n";
	else if(n<=(h-1)+(4*((j-h+1)/5)))
		cout<<"Rajesh\n";
	else if(n<=(h-1)+(5*((j-h+1)/5)))
		cout<<"Howard\n";

}