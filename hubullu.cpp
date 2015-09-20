#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,N,A;
	cin>>T;
	while(T>0)
	{
		cin>>N>>A;
		if(A==0)
			cout<<"Airborne wins."<<endl;
		else
			cout<<"Pagfloyd wins."<<endl;
		T--;
	}
	return 0;
}

