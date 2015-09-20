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
	long long p,q,x,y,temp,M;
	cin>>T;
	while(T>0)
	{
		cin>>n;
		cin>>M;
		//f(n)=fibo(n+1) fibonacci number with series fibo(0)=1&fibo(1)=1
		//A(n)=n-digit nos without 11 starting with 1
		//B(n)=n-digit nos without 11 starting with 0
		//f(n)=A(n)+B(n)
		//A(n+1)=B(n),B(n+1)=A(n)+B(n)=B(n-1)+B(n)=fibo(n+1)=f(n)
		//A(1)=1,B(1)=1,B(0)=1
		//sum of n+1 fibo nos(i.e. fibo(0)+fibo(1)+....fibo(n)=fibo(n+2)-1
		//S(n)=fibo(2)+fibo(3)+....fibo(n+1)
		//S(n)=fibo(n+3)-3
		p=0;
		q=1;
		x=1;
		y=1;
		/*[fibo(n+3)]		 ([1  1])		  [ 1 ]
		  |         | = pow{ (|    |), n+2} * |   |
		  [fibo(n+2)]		 ([1  0])		  [ 1 ] */
		n=n+2;
		while(n>0)
		{
			if(n%2==0)
			{
				temp=p;
				p=(p*p+q*q)%M;
				q=(q*q+2*temp*q)%M;
				n/=2;
			}
			else
			{
				temp=x;
				x=(x*(p+q)+y*q)%M;
				y=(temp*q+y*p)%M;
				n--;
			}
		}
		x=x-3;
		while(x<0)
		{
			x+=M;
		}	
		cout<<x<<endl;
		T--;
	}
	return 0;
}

