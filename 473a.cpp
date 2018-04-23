#include<bits/stdc++.h>
using namespace std;
bool primo[100001];
long long  prime(long long  n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	long long  c=0;
	for(long long  i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	int n;int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<100001;i++)
	{
		if(prime(i))
		{
			primo[i]=true;
		}
		else
			primo[i]=false;
	}
	int brr[n];
	for(int i=0;i<n;i++){
		if(primo[arr[i]]==true)
			brr[i]=arr[i];





	}
	return 0;
}