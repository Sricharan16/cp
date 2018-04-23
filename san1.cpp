#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,r;
	cin>>n>>r;
	int a[n+2],b[n+2];
	for (int i = 0; i < r; ++i)
	{
		cin>>a[i];
	}
	int c=1,k=0,l=1,m=0;
	b[0]=0;
	for (; k<r; )
	{
		if(l==1)
		{
			b[l]=a[k];
			k++;
			if(b[l]==c)
			{
				c++;
				m++;
			}
			else
			{
				l++;
			}

		}
		else 
		{
			if(b[l-1]==c)
			{
				c++;
				m++;
				l--;
			}
			else
			{
				b[l]=a[k];
				k++;

				if(b[l]==c)
				{
					c++;
					m++;
				}
				else
				{
					if(b[l]>b[l-1])
					{
						cout<<"-1\n";
						return 0;
					}
					else
						l++;
				}
			}
		}
	}
	l--;
	for (int i = 0; i < r; ++i)
	{
		cout<<a[i]<<" ";
	}
	for (; c<=n; )
	{
		if(l>0)
		{
			int g=b[l]-1;
			while(g>=c)
			{
				cout<<g<<" ";
				g--;
			}
			c=b[l]+1;
			l--;
		}
		else
		{
			int g=n;
			while(g>=c)
			{
				cout<<g<<" ";
				g--;
			}
			c=n+1;
		}
	}
	cout<<"\n";
	return 0;
}