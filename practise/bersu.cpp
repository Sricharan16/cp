#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int m;cin>>m;int b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int count=0;int i=0,j=0;
	while(i<n && j<m)
	{//cout<<"done"<<" "<<(b[0]-a[0])<<" "<<endl;
		if(abs(b[j]-a[i])==0 || abs(b[j]-a[i])==1)
		{
			//cout<<"entered here";
			count++;
			i++;j++;
		}
		else if(b[j]-a[i]>1)
		{
			i++;
		}
		else if(a[i]-b[j]>1)
		{
			j++;
		}
	}
	cout<<count;

	return 0;
}