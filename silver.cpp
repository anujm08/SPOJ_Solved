#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n,cuts;
	while(true)
	{
		cin>>n;
		if(n==0)
			break;
		cuts=0;
		while(n>1)
		{
			cuts++;
			n/=2;
		}
		cout<<cuts<<endl;
	}
	return 0;
}
