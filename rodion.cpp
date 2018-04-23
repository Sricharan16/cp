#include<iostream>
#include<cmath>
int main()
{
	int n,c;
	cin>>n>>c;
 	int a[n];
 	a[n-1]=1;
 	for(int i=0;i<=9;i++)
 	{
 		if((1000000+i)%c==0)
 		{
 			cout<<(1000000+i);
 			break;

 		}
 	}
}