#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int T,N,i,temp;
	long long A,B,sum;
	cin>>T;
	while(T>0)
	{
		sum=0;
		cin>>N;
		if(N)
			cin>>A;
		for(i=1;i<N;i++)
		{
			cin>>B;
			sum=sum+(N-i)*i*(B-A);
			temp=B;
			B=A;
			A=temp;
		}
		T--;
		cout<<sum<<endl;
	}
	return 0;
}
