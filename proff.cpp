#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int ans,carry,digA,digB;
	unsigned int A,B;
	while(true)
	{
		cin>>A>>B;
		if(A==0&&B==0)
			break;
		carry=0;
		ans=0;
		while(A>0||B>0)
		{
			
			digA=A%10;
			A=A/10;
			digB=B%10;
			B=B/10;
			if((digA+digB+carry)>9)
			{
				ans++;
				carry=1;
			}
			else
			{
				carry=0;
			}
		}
		if(ans==0)
			cout<<"No carry operation."<<endl;
		else if(ans==1)
			cout<<"1 carry operation."<<endl;
		else
			cout<<ans<<" carry operations."<<endl;
	}
	return 0;
}