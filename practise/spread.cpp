#include<bits/stdc++.h>
using namespace std; 
vector <string> si;
void evaluate(string x)
{ 	
	string ci="";int z=0,i;
	for ( i = 0; i < x.length(); ++i)
	{
		char c=x[i];
		if(c<=90 && c>=65)
		{
			ci+=c;
		}
		else
			break;
	}
	string cha="";
	for(int j=i;j<x.length();j++)
	{
		cha+=x[j];
		//cout<<cha<<endl;
	}
	int row=stoi(cha);int p=1;
	for(int j=ci.length()-1;j>=0;j--)
	{
		
		int i=1;
		//cout<<">"<<(ci[j]-'A'+1)*p<<endl;
		z+=(ci[j]-'A'+1)*p;
		p=p*26;
	}
	int column=z;
	//cout<<"R"<<row<<"C"<<column<<endl;
	si.push_back("R"+to_string(row)+"C"+to_string(column));
	
}
int main()
{
	int n;
	cin>>n;string str;int row,column;int flags=0,z,j;
	for(int i=0;i<n;i++)
	{
		flags=0;string sample="";
		cin>>str;
		if (str[0]=='R')
		{
			for ( j= 1; j < str.length(); ++j)
			{
				if(str[j]=='C')
				{
					break;
				}
				sample+=str[j];
			}
			if(sample=="")
			{
				flags=1;
			}
			else
			{
				row=stoi(sample);
				//cout<<row<<endl;
				sample="";
				for ( j = j+1; j < str.length(); ++j)
				{
					sample+=str[j];
				}
				column=stoi(sample);
				//cout<<column<<endl;
			}
			if(flags==0)
			{
				string p;
				while(column>0)
				{
					char z='A'+((column%26)-1);
					p=z+p;
					// column=column/10;
				
					column=column/26;

				}
				//cout<<p<<endl;
				//cout<<p<<row<<endl;
				si.push_back(p+to_string(row));
			  continue;
				
			}
			if(flags==1)
				evaluate(str);
				continue;

		}
		
		evaluate(str);
	

	}
	for (int i = 0; i < si.size(); ++i)
	{
		cout<<si[i]<<endl;/* code */
	}
	return 0;
}