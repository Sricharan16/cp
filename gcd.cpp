#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int sim,an,heap;
	cin>>sim>>an>>heap;
	int i=1;
	int temp;
	while(heap>0){
		if(i%2==1)
		{
			temp=__gcd(sim,heap);
			//cout<<"gcd("<<sim<<","<<heap<<")"<<temp<<" ";
			//sim=sim+ temp;
			heap=heap-temp;
			//cout<<heap<<" "<<endl;
		}
		else
		{
			temp=__gcd(an,heap);
			//cout<<"gcd("<<an<<","<<heap<<")"<<temp<<" ";
			//an=an+temp;
			heap=heap-temp;
			//cout<<heap<<" "<<endl;
		}
		i++;
	}
	if((i-1)%2==0)
		cout<<"1";
	else
		cout<<"0";
	return 0;
}