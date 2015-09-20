#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	unsigned long long T,n,a,b,s;
	long long d;
	cin>>T;
	while(T>0)
	{
		cin>>a>>b>>s;
		n=s*2/(a+b);
		d=(b-a)/(n-5);
		cout<<n<<endl;
		for(int i=0;i<n-1;i++)
			cout<<a-2*d+i*d<<" ";
		cout<<a+(n-3)*d<<endl;
		T--;
	}
	return 0;
}

