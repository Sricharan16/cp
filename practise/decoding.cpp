#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	string str;
	cin>>str;int t=n;char a[n+1];
	int i=0;
	for(int i=0;i<n+1;i++)a[i]=' ';
	while(t>0){		
		char ch=str[i];
		cout<<"#"<<ch<<endl;
	 if((t+1)%2==0)
		{
			int k=1;
			int pos=(t+1)/2;
			while(pos!=0){
				if(a[k]==' ')
					{k++;
						pos--;}
				else
					k++;
				
			}
			cout<<"odd";
			cout<<k<<" "<<t<<"t"<<endl<<endl<<endl;

		 a[k]=ch;
		 for(int i=1;i<=n;i++)cout<<a[i];
				cout<<endl;
		}
		else{
			int k=1;
			int pos=(t)/2;
			while(k!=pos && pos<=n){
				if(a[k]==' ')
					k++;
				else
					pos++;
			}
			cout<<"t"<<t<<" "<<"even";
			cout<<k<<endl<<endl<<endl;

		 a[k]=ch;
		 for(int i=1;i<=n;i++)cout<<a[i];
				cout<<endl;
		}
	i++;
	t--;
	}
	cout<<a;
	return 0;
}

		