#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
	struct s{
		long long x;
		long long y;
	};long long n;cin>>n;
	set <double> seti;
	s points[n];
	long long x1,y1,a,b;cin>>x1>>y1;
	for (long long i = 0; i < n; ++i)
	{
		cin>>a>>b;
		points[i].x=x1-a;
		points[i].y=y1-b;
	}
	double slopes[n];long long flags=0;
	for (long long i = 0; i < n; ++i)
	{
		slopes[i]=(double)points[i].y/points[i].x;
		if(points[i].x==0)
        {flags=1;//cout<<"camehere";
}
    	else if(slopes[i]==0 || slopes[i]==-0)
    	seti.insert(0);
     	else
     	 seti.insert(slopes[i]);
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<slopes[i]<<" ";
	// }
	//cout<<endl;
	set<double>::iterator it;
// 	 for ( it=seti.begin() ; it != seti.end(); it++ )
//     {//cout << " " << *it;
// if(isnan(*it))
// 	{
// 		cout<<"camehere";
// 		flags=1;
// 	}
// }
//cout<<endl;
	if(flags==0)
	cout<<seti.size();
else
	cout<<seti.size()+1;
//cout<<"flasgs"<<flags;
	return 0;
}