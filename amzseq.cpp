#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int N,ans,temp,A=1,B=1;
	cin>>N;
	//A after (n)th iteration is ways of filling last n+1 digits assuming (n+2)th digit from last is 1 
	//B if last is 0=if last is 2(symmetry)
	for(int i=0;i<N-1;i++)
	{
		temp=A;
		A=A+2*B;//ways of filling (i+1)digits assuming (i+2)th  digit from last is 1 = (keep dig 1)*ways of filling i digits(A)+(keep dig 0)*B+(keep dig 2)*B  
		B=temp+B;//ways of filling (i+1)digits assuming (i+2)th  digit from last is 0 = (keep dig 1)*ways of filling i digits(A)+(keep dig 0)*B
	}
	ans=A+2*B;
	cout<<ans<<endl;;
	return 0;
}
