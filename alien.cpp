#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,P[100000],A,B,i,sum,minsum,ans;
	cin>>T;
	while(T>0)
	{
		cin>>A>>B;
		for(i=0;i<A;i++)
			cin>>P[i];
		ans=0;
		sum=0;
		while(ans<A)
		{
			if((sum+P[ans])<=B)
			{
				sum+=P[ans];
				ans++;
			}
			else
				break;
		}
		minsum=sum;
		for(i=1;i<=A-ans;i++)
		{
			sum=sum-P[i-1]+P[i+ans-1];
			while(i+ans<A)
			{
				if((sum+P[i+ans])<=B)
				{
					sum+=P[i+ans];
					ans++;
					minsum=sum;
				}
				else
					break;
			}
			if(sum<minsum)
			{
				minsum=sum;
			}
		}
		cout<<minsum<<" "<<ans<<endl;
		T--;
	}
	return 0;
}