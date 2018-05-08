#include<iostream>
#include<string>
using namespace std;
int main()
{ int k,n,w;
	cin>>k>>n>>w;
	
	if((k*w*(w+1)/2)<n)
		cout<<"0";
	else 
		cout<<(k*w*(w+1)/2)-n;
	return 0;
}