#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int sum=a[0];int count=1;
	for(int i=1;i<n;i++){
		if(sum>a[i]){
			
		}
		else
		{

			sum+=a[i];
			count++;
		}

	
	}cout<<count;
	return 0;
}