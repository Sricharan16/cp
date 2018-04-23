#include<iostream>
#include<string>
using namespace std;
int main()
{	int a[100001]={0};
	int n,m;
	cin>>n>>m;
	int array[n];
	int b[n]={0};
	for(int i=0;i<n;i++)
		cin>>array[i];
	int count=0;
	for(int i=n-1;i>=0;i--)
		{
			if(a[array[i]]==0)
			{
				count++;
				a[array[i]]=1;
			}
			b[i]=count;
		}
		int p;
	for(int i=0;i<m;i++)
	{
		cin>>p;
		cout<<b[p-1]<<endl;
	}
	return 0;
}