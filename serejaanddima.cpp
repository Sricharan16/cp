#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int j=0;int k=n-1;int see=0,bee=0;
	for(int i=0;i<n;i++){

		if(i%2==0){
			if(arr[k]>arr[j])
			{
				see=see+arr[k];
				k--;
			}
			else{
				see=see+arr[j];j++;
			}
		}
		else{
			if(arr[k]>arr[j])
			{
				bee=bee+arr[k];
				k--;
			}
			else{
				bee=bee+arr[j];j++;
			}

		}
	}
	cout<<see<<" "<<bee;
	return 0;
}