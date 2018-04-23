#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;int sum=0;
	if(str.length()==1){
		cout<<"0";
		return 0;
	}
	for(int i=0;i<str.length();i++){
		sum+=(str[i]-'0');
	}
	//cout<<sum;
	int count=0;
	 str=to_string(sum);
	 //cout<<str;
	while(str.length()>1 ){
		//cout<<str<<endl;
		sum=0;
		for(int i=0;i<str.length();i++)
		{
		sum+=(str[i]-'0');
		}
	 str=to_string(sum);
	count++;
	}
	cout<<count+1;
}
