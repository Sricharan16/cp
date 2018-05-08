#include<iostream>
#include<vector>
using namespace std; 
int main()
{
	int n;
	cin>>n;
	vector<int> a(n+1,0);
	int pos1=0,pos2=0,count1=0,count2=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			count1++;
			pos1=i;
		}
		else
		{
			count2++;
			pos2=i;
		}
	}
	if(count1==1)
		cout<<pos1;
	else 
		cout<<pos2;

	return 0;

}