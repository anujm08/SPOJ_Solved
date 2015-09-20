#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T,sq;
	long long ans,N,r,l;
	cin>>T;
	while(T>0)
	{
		cin>>N;
		ans=0;
		sq=sqrt(N);
		for(int i=1;i<=N/sq;i++)
		{
			ans=ans+N-N%i-i;

		}
		for(int i=2;i<sq;i++)
		{
			r=N/i;
			l=N/(i+1);
			ans=ans+(i-1)*(r-l)*(l+1+r)/2;
		}
		cout<<ans<<endl;
		T--;
	}
	return 0;
}