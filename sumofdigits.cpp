#include<iostream>
#include<string>
using namespace std; 
int main()
{
	int m,s;
	cin>>m>>s;
	if(m==1 && s==0)
	{
		cout<<"0"<<" "<<"0";
	}
	if (s>m*9 || (s==0 && m>1))
	{
		cout<<"-1 -1";
		return 0;
	}
	string min,max;
	int temp=s;
	while(temp-9>0)
	{
		max=max+"9";
		temp=temp-9;
	}
	max=max+to_string(temp);
	while(max.length()!=m){max=max+"0";}
	//cout<<max;
	if(s>(m-1)*9 )
	{   temp=s;
		while(temp-9>0)
	{
		min="9"+min;
		temp=temp-9;
	}
	min=to_string(temp)+min;
	}
	else
	{temp=s-1;
	//	min="1"+min;
		while(temp-9>0)
	{
		min="9"+min;
		temp=temp-9;
	}
	min=to_string(temp)+min;
	while(min.length()!=m){min="0"+min;}
	//cout<<min<<"here"<<endl;
    min[0]='1';
	}
	cout<<min<<" "<<max;
	return 0;
}