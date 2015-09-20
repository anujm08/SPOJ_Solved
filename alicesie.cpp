#include <iostream>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,N;
	cin>>T;
	while(T>0)
	{
		cin>>N;
		cout<<(N+1)/2<<endl;
		T--;
	}
	return 0;
}

