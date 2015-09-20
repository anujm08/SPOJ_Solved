#include <iostream>

using namespace std;

int main()
{
	long long n,m,a,num;
	while(true)
	{
		cin>>n>>m;
		if(n==-1&&m==-1)
			break;
		for(a = 1; a<n; a++)
		{
			if((n-a)*(n-a-1)/2>=m)
				cout<<a<<" ";
			else
				break;
		}
		num = a+m-((n-a)*(n-a-1)/2);
		cout<<num;
		for(long long i=n;i>=a;i--)
		{
			if(i!= num)
				cout<<" "<<i;
		}
		cout<<endl;

	}
	return 0;
}