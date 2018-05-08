#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
 int a[n+2][n+2];
 for(int i=0;i<n+2;i++){
 	a[0][i]=-1;
 	a[n+1][i]=-1;
 }
 for(int i=1;i<n+1;i++){
 	a[i][0]=-1;
 	a[i][n+1]=-1;
 }
 string str;
   for(int i=1;i<=n;i++){
   	cin>>str;
   	for(int j=1;j<=n;j++){
   		if(str[j-1]=='x')
   		{
   			a[i][j]=1;
   		}
   		else{
   			a[i][j]=0;
   		}
   	}
   }
   int count=0;
   for(int i=1;i<=n;i++){
   	for (int j=1;j<=n;j++)
   	{
   		
   			count=0;
   			if(a[i-1][j]==0)
   				count++;
   			if(a[i][j-1]==0)
   				count++;
   			if(a[i+1][j]==0)
   				count++;
   			if(a[i][j+1]==0)
   				count++;
   			if(count%2==0){
   				count=0;
   			}
   			else{
   				cout<<"NO";
   				return 0;
   			}

   		
   	}
   	
   }
   cout<<"YES";
	return 0;
}