#include<iostream>
using namespace std;

int main()
{
int n,i,c=0,j;
cin>>n;
int a[3000];
a[0]=2;
for(i=3;i<=n;i++)
{
for(j=0;j<3000;j++)
{
a[j]=(a[j]*i+c)%10;
c=(a[j]*i+c)/10;
}
}
i=0;
for(j=2999;j>=0;j--)
{
if(a[j]!=0 && c==0)
c=1;
else
cout<<a[j];
}
cout<<endl;
}

