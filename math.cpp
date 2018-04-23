#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool prime(int n)
{
	if(n==1)
		return false;
	if(n==2)
		return true;
	int k=0;
	int p=sqrt(n);
	//cout<<p;
	for(int i=2;i<=p;i++)
	{
		if(n%i==0)
			return false;
	}
		return true;
}
int main()
{

 int n;
  cin>>n;
  for(int i=2;i<=n-2;i++)
  {
  	if(prime(i)==false && prime(n-i)==false )
  	{
  		cout<<i<<" "<<n-i;
  		break;
  	}
  }

	return 0;

}