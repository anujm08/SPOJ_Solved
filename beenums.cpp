#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int n,k;
	while(true)
	{
		cin>>n;//each number should be of form 1+3m(m+1)
		if(n==-1)
			break;
		n--;
		if(n%3!=0)
		{
			cout<<"N"<<endl;
		}
		else
		{
			n=n/3;
			k=sqrt(n);
			if(k*(k+1)==n)
				cout<<"Y"<<endl;
			else
				cout<<"N"<<endl;
		}
	}
	return 0;
}