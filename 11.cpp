#include<iostream>
#include<algorithm>
using namespace std;
#include<iomanip>
#include<cmath>
int main()
{
	int n,r;
	int* X =(int*)malloc(sizeof(int)*n);
	cin>>n>>r;
	for(int i=0;i<n;i++)
	{
		cin>>X[i];
	}
	float* Y =(float*)malloc(sizeof(float)*n);
	Y[0]=r;
	    for(int i=0;i<n;i++)
    {  
    	Y[i]=r;
    }
	float y;
    for(int i=1;i<n;i++)
    {  float max=0;
    	for(int j=0;j<i;j++)
    	{
    		if(X[i]-X[j]<=2*r)
    		{
    		   y=Y[j]+sqrt(4*r*r-(X[i]-X[j])*(X[i]-X[j]));
    		   if(y>max)
    		   	max=y;
    		}
    	}
    	if(max>Y[i])
    	Y[i]=max;
    }
    for(int i=0;i<n;i++)
    {  
    	cout<<fixed<<setprecision(6)<<Y[i]<<" ";
    }
	return 0;
}