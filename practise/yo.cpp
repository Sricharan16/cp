#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#define pb push_back

using namespace std;
int min(int a,int b)
{
        if(a<b)
        return a;
        else 
        return b;
}
int max(int a,int b)
{
        if(a>b)
        return a;
        else 
        return b;
}
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
struct point{
	int x;
	int y;
};
void permute(string a, int l, int r,struct point start,struct point end, string s, int* count,int n,int m,char**array)
{   if(l==r){
	int up,down,left,right;
	up=a[0];
	down=a[1];
	left=a[2];
	right=a[3];
	point p=start;
	// cout<<a<<endl;
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<m;j++)
	// 		cout<<array[i][j]<<" ";
	// 	cout<<endl;
	// }
	// cout<<endl;
	//cout<<array[5][0]<<"this is god";
  for(int i=0;i<s.length();i++)
  {
         if(s[i]==up)
         {
         	if((p.x-1)<0)
         		break;
         	else 
         		{
         		p.x=p.x-1;
         		 if(array[p.x][p.y]=='#')
         		 	break;
         		}
         }
         if(s[i]==down)
         {
         	if((p.x+1)>(n-1))
         		break;
         	else 
         		{p.x=p.x+1;
         			if(array[p.x][p.y]=='#')
         		 	break;}
         }
          if(s[i]==left)
         {
         	if((p.y-1)<0)
         		break;
         	else 
         		{p.y = p.y-1;
         		if(array[p.x][p.y]=='#')
         		 	break;}
         }
         if(s[i]==right)
         {
         	if((p.y+1)>(m-1))
         		break;
         	else 
         		{
         		p.y = p.y+1;
         		if(array[p.x][p.y]=='#')
         		 	break;
         		}
         }
        if(p.x==end.x && p.y==end.y)
        {
        	*count= (*count)+1;
        	break;

        }
  }
}
       for (int j = l; j <= r; j++)
       {
          swap(&a[l],&a[j]);
       	  // string temp;
          // temp=a[i];
          // a[i]=a[l];
          // a[l]=temp;
          permute(a, l+1, r,start,end,s,count,n,m,array);
          swap(&a[l],&a[j]); //backtrack
          // temp=a[i];
          // a[i]=a[l];
          // a[l]=temp;
       }

}
int main() {
	int n,m;
	cin>>n>>m;
	point start,end;
	char** array= (char**)malloc(sizeof(char*)*n);
	
		

	for(int i=0;i<n;i++)
	{
		array[i]=(char*)malloc(sizeof(char)*m);
		string str1;
		cin>>str1;
		for(int j=0;j<m;j++)
		{
			array[i][j]=str1[j];
			if(array[i][j]=='S')
			{
				start.x=i;
				start.y=j;
			}
			else if(array[i][j]=='E')
			{
				end.x=i;
				end.y=j;
			}
		}
	}
  string s;
  cin>>s;
  //int up,down,left,right;
  int count=0;
  
   string str = "0123";
    permute(str, 0, 3,start,end,s,&count,n,m,array);
  cout<<count;
  return 0;
}
