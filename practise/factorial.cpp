#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 3000
using namespace std;
int sum(int first[][MAX],int second[][MAX])
{ int c=0;
 int alpha;
        for( alpha=MAX-1;alpha>=0;alpha--)
        {
           int temp=first[0][alpha]+second[0][alpha]+c;
            c=temp/10;
           first[0][alpha]=temp%10;
        }
 return 0;
}
int main(){
    int n,i;
    cin >> n;
     int a[1][MAX]={0};
     int b[1][MAX]={0};
     int c[1][MAX]={0};
    //b[0][MAX-1]=1;
    a[0][MAX-1]=1;
    c[0][MAX-1]=1;
   for(int i=2;i<=n;i++)
   { 
     
       for(int j=i;j>0;j--)
       {   
           sum(b,c);
       }
        for( int k=0;k<MAX;k++)
      {
          c[0][k]=b[0][k];
      }
        b[1][MAX]={0};
        for(int  z=0;z<MAX;z++)
             b[0][z]=0;
   }
    int count=0;
      for( i=0;i<MAX;i++)
     {
         if(c[0][i]!=0)
         {
             break;
             
         }
          count++;}
   // cout<<"the count value is"<<count<<endl;
    for( i=count;i<MAX;i++)
             cout<<c[0][i];
    return 0;
}
