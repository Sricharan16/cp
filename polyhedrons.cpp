#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	int sum=0;
	map <string,int> A;
	A.insert(make_pair("Icosahedron",20));
	A.insert(make_pair("Cube",6));
	A.insert(make_pair("Tetrahedron",4));
	A.insert(make_pair("Dodecahedron",12));
	A.insert(make_pair("Octahedron",8));
	for(int i=0;i<n;i++)
	{
		cin>>s;
		sum=sum+A[s];
	}
	cout<<sum;
	




	return 0;
}