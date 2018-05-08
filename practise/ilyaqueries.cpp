#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
    string s;
    cin>>s;
    int sumi=0;
    n=s.length();
    vector<int> A(n,0);
    vector<int> sum(n,0);
    for(int i=0;i<n-1;i++)
    {
    	if(s[i+1]==s[i])
    		A[i]++;

    }
     for(int i=0;i<n;i++)
    {
    	
    	sumi=sumi+A[i];
    	sum[i]=sumi;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	int start,endi;
    	cin>>start>>endi;
    	if(start-2>=0)
    	cout<<sum[endi-2]-sum[start-2]<<endl;
    	else 
    	cout<<sum[endi-2]<<endl;
  
    }

	return 0;
}