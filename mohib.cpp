#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,x,avg,n,ans;
	cin>>T;
	while(T>0)
	{
		cin>>x>>avg;
		n=avg-x;
		ans=n*(avg+1)-n*(n-1)/2;
		cout<<ans<<endl;
		T--;
	}
	return 0;
}

