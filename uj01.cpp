#include <iostream>
using namespace std;

int gcd(int A,int B)
{
	if(B==0)
	{
		return A;
	}
	else
		return gcd (B,A%B);
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	long long ans,ans2,mulA,mulB,l,A,B,m,N,f;
	cin>>T;
	while(T>0)
	{
		cin>>A>>B>>N;
		l=A*B/gcd(A,B);//l is the lcm
		m=l/A+l/B-1;//lcm is mth number
		f=N/m;
		ans=f*l;//ans is int(N/m*m) number
		N=N%m;//need to add N%m th number in ans
		mulA=A;
		mulB=B;
		ans2=0;
		while(N>0)
		{
			if(mulA<mulB)
			{
				ans2=mulA;
				mulA+=A;
			}
			else //if(mulB<mulA)
			{
				ans2=mulB;
				mulB+=B;
			}
			N--;
		}
		ans=ans+ans2;
		cout<<ans<<endl;
		T--;
	}
	return 0;
}

