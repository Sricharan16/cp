#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=1;
	int max=1;
	int* a=(int*)malloc(sizeof(int)*n);
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	  }
	  for(int i=1;i<n;i++)
	 {
	 	if(a[i]>=a[i-1])
	 	{
	 		count++;
	 	}
	 	else 
	 		{  
	 		if(count>max)
	 			max=count;
	 		count=1;
	 	}
	 	if(count>max)
	 			max=count;
	  }
	  cout<<max;
	return 0;
}