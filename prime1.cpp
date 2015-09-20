#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int T,m,n,i,j;
	cin>>T;
	int upperlimit=ceil(sqrt(1000000000));
	vector<bool> isprime(upperlimit+1,true);
	vector<bool> prime;
	
	for(i=2;i<=upperlimit;i++)
	{
		if(isprime[i]==true)
		{
			for(j=2*i;j<=upperlimit;j=j+i)
			{
				isprime[j]=false;
			}
		}
	}
	while(T>0)
	{
		cin>>m>>n;
		if(m==1)
			m++;

		if(n<=upperlimit)
		{
			for(i=m;i<=n;i++)
				if(isprime[i]==true)
					cout<<i<<endl;
			if(T!=1)
				cout<<endl;
			T--;
			continue;
		}
		else if(m<=upperlimit)
		{
			for(i=m;i<=upperlimit;i++)
				if(isprime[i]==true)
					cout<<i<<endl;
			m=upperlimit+1;
		}
		prime.clear();
		prime.resize(n-m+1,true);
		for(i=2;i<=upperlimit;i++)
		{
			if(isprime[i]==true)
			{
				
				j = m-1+i-(m-1)%i;
				for(;j<=n;j=j+i)
				{
					prime[j-m] = false;
				}
			}
		}
		for(i=0;i<n-m+1;i++)
		{
			if(prime[i]==true)
				cout<<i+m<<endl;
		}
		if(T!=1)
			cout<<endl;
		T--;
	}
	return 0;
}
