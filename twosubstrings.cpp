#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int flags=0;
   set<int>pos1;
   set<int>pos2;
   for(int i=0;i<s.length()-1;i=i+1)
   {
   	if(s[i]=='A'&& s[i+1]=='B')
   	{
   		pos1.insert(i+1);
   	}
   	else if(s[i]=='B' && s[i+1]=='A' )
   		{
            pos2.insert(i);
         }
   }
   set<int> combi;
   set<int>::iterator i;
   for( i=pos1.begin();i!=pos1.end();i++)
   {
      combi.insert(*i);
   }
   for( i=pos2.begin();i!=pos2.end();i++)
   {
      combi.insert(*i);
   }


   if(pos1.size()>=1 && pos2.size()>=1 && combi.size()>=2)
   	cout<<"YES";
   else 
   	cout<<"NO";

	return 0;
}