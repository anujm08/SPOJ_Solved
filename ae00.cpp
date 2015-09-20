#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	long long ans=0;
	cin>>N;
	for(int i=1;i<=sqrt(N);i++)
	{
		ans=ans+N/i-(i-1);
	}
	cout<<ans<<endl;
	return 0;
}