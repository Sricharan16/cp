#include<bits/stdc++.h>
using namespace std;
double distance(double x1,double y1,double x2, double y2){
	double zeta=sqrt(((x1-x2)*(x1-x2))+(y1-y2)*(y1-y2));
	return zeta;
}
double slope(double x1,double y1,double x2, double y2)
{
	double zeta=(y2-y1)/(x2-x1);
	return zeta;
}
int main(int argc, char const *argv[])
{
	double R,x1,y1,x2,y2;cin>>R>>x1>>y1>>x2>>y2;
	if(abs(x1-x2)>=0 && abs(x1-x2)<=0.000001 && abs(y1-y2)>=0 && abs(y1-y2)<=0.000001)
	{
		double angle=0;
		//cout<<angle<<endl;
		double tempa=x1+R*cos(angle);
		double tempa1=x1-R*cos(angle);
		double tempb=y1+R*sin(angle);
		double tempb1=y1-R*sin(angle);
		cout<<fixed<<setprecision(12)<<(tempa+x2)/2<<" "<<(tempb+y2)/2<<" "<<(distance(x1,y1,x2,y2)+R)/2;
		return 0;
	}
	if(abs(distance(x1,y1,x2,y2)-R)>=0 && abs(distance(x1,y1,x2,y2)-R)<=0.000001)
	{
		cout<<fixed<<setprecision(12)<<x1<<" "<<y1<<" "<<R;

		return 0;
	}
	else if(distance(x1,y1,x2,y2)<R)
	{
		double angle=atan(slope(x1,y1,x2,y2));
		//cout<<angle<<endl;
		double tempa=x1+R*cos(angle);
		double tempa1=x1-R*cos(angle);
		double tempb=y1+R*sin(angle);
		double tempb1=y1-R*sin(angle);
		if(distance(tempa,tempb,x2,y2)>=distance(tempa1,tempb1,x2,y2))
		{
			cout<<fixed<<setprecision(12)<<(tempa+x2)/2<<" "<<(tempb+y2)/2<<" "<<(distance(x1,y1,x2,y2)+R)/2;
		return 0;
		}
		else
		{
			cout<<fixed<<setprecision(12)<<(tempa1+x2)/2<<" "<<(tempb1+y2)/2<<" "<<(distance(x1,y1,x2,y2)+R)/2;
		return 0;
		}
		cout<<fixed<<setprecision(12)<<(tempa+x2)/2<<" "<<(tempb+y2)/2<<" "<<(distance(x1,y1,x2,y2)+R)/2;
		return 0;
	}
	else
		{
		cout<<fixed<<setprecision(12)<<x1<<" "<<y1<<" "<<R;

		return 0;
	}

	
	
	return 0;
}