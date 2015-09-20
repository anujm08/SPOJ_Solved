#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T,t=1;
	long long N,sq;
	cin>>T;
	while(t<=T)
	{
		cin>>N;
		sq=sqrt(N);
		cout<<"Case "<<t<<": ";
		if(N==sq*sq)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		t++;
	}
	return 0;
}
