#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int a,b,s,m,n;
	double vh,vv,v,A;
	cout<<std::fixed;

	while(true)
	{
		cin>>a>>b>>s>>m>>n;
		if(a==0&&b==0&&s==0&&m==0&&n==0)
			break;
		vv=n*b*1.0/s;
		vh=a*m*1.0/s;
		v=sqrt(vv*vv+vh*vh);
		A=atan(vv/vh)*180/3.14159265;
		cout<<setprecision(2)<<A<<" "<<v<<endl;
	}
	return 0;
}