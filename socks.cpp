#include<iostream>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 int count=n;
 for(int i=1;i<=300;i++)
 {
 	if(i%m==0)
 		count++;
 	count--;
 	if(count==0)
 	{
 		cout<<i;
 		break;
 	}
 }
 return 0;
}