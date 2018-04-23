#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n;cin>>n;int temp=0;long long  sum=0;
	int A[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>>A[i];sum=sum+A[i];
	}sort(A,A+n);
	if(sum%2==0)
		cout<<sum;
	else
	{for (int i = 0; i < n; ++i)
		{
			if(A[i]%2==1)
				{ temp=A[i];break;}
		}cout<<sum-temp;	}
}