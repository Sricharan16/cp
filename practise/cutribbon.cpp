#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int i=n/a;
	int maxi=0;
	int j=n/b;
	for(int k=i;k>=0;k--)
	{
		for(int p=j;p>=0;p--)
		{
			if((n-k*a-p*b)%c==0 && (n-k*a-p*b)>=0)
			{
				int l=(n-k*a-p*b)/c;
				maxi=max(maxi,k+p+l);
			}
		}
	}
	cout<<maxi;
	return 0;
}