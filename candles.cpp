#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int i;
	for(i=1;i<=2000;i++)
	{
		if(i%b==0)
			a++;
		
			a--;
		if(a==0)
			break;
	}
	cout<<i;
	return 0;
}