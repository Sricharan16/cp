#include<iostream>
#include<string>
#define IFOR(n) for( i=0;i<n;i++)
using namespace std;
int main()
{
	int n,i;
	int p,q;
	int c;
	cin>>n;
	bool A[n]={false};
	cin>>p;
	IFOR(p)
	{
		cin>>c;
		A[c-1]=true;
	}
	cin>>q;
	IFOR(q)
	{
		cin>>c;
		A[c-1]=true;
	}
	IFOR(n)
	{
		
		if(A[i]==false)
			{cout<<"Oh, my keyboard!";
				return 0;
			}
	}
   cout<<"I become the guy.";
	return 0;
}