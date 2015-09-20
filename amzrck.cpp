#include <iostream>
using namespace std;
long long ncr(int n,int r,long long prev)
{
	long long res;
	res=prev*(n-r+2)*(n-r+1)/((n+1)*r);
	return res;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T,n;
	long long sum,prev;
	cin>>T;
	while(T>0)
	{
		cin>>n;
		sum=1;
		prev=1;
		for(int i=0;i<=(n-1)/2;i++)
		{
			prev=ncr(n-i,i+1,prev);
			sum=sum+prev;
		}
		cout<<sum<<endl;
		T--;
	}
	return 0;
}

