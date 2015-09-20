#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,E,N,ans;
	cin>>T;
	while(T>0)
	{
		cin>>E>>N;
		ans=(E+N)/3;
		if(E<ans)
			ans=E;
		else if(N<ans)
			ans=N;
		cout<<ans<<endl;
		T--;
	}
	return 0;
}

