#include<iostream>
using namespace std;
bool lucky(int n)
{
	int p=n;
	while(p>0)
	{
		if(p%10!=4 && p%10!=7)
			return false;
		p=p/10;
	}
	return true;

}
int main()
{
	int n;
	cin>>n;
	for(int i=4;i<=n;i++)
	{
		if(lucky(i))
		{
			if(n%i==0)
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}
