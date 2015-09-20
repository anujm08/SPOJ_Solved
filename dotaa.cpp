#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,n,m,D,H;
	cin>>T;
	while(T>0)
	{
		cin>>n>>m>>D;
		for(int i=0;i<n;i++)
		{
			cin>>H;
			if(m>0)
				m=m-(H-1)/D;
		}
		if(m>0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		T--;
	}
	return 0;
}

