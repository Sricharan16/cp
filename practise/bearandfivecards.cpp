#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[5];int maxi=9999999;
	for (int i = 0; i < 5; ++i)
	{
		cin>>a[i];
	}sort(a,a+5);
	if(a[2]==a[3] && a[3]==a[4])
	{
		maxi=min(maxi,a[0]+a[1]);
		
	}
	if(a[1]==a[2] && a[2]==a[3])
	{
		maxi=min(maxi,a[0]+a[4]);
		
	}
	if(a[0]==a[1] && a[1]==a[2])
	{
		maxi=min(maxi,a[3]+a[4]);
		
	}
	
	
	if(a[3]==a[4])
	{
		maxi=min(maxi,a[2]+a[0]+a[1]);
		
	}
	if(a[2]==a[3])
	{
		maxi=min(maxi,a[0]+a[1]+a[4]);
		
	}
	if(a[1]==a[2])
	{
		maxi=min(maxi,a[0]+a[3]+a[4]);
		
	}
	if(a[0]==a[1])
	{
		maxi=min(maxi,a[2]+a[3]+a[4]);
		
	}
	if(maxi==9999999)
	{
		cout<<a[0]+a[1]+a[2]+a[3]+a[4];
		return 0;
	}
	cout<<maxi<<endl;
	
	
	
	
	

	return 0;
}