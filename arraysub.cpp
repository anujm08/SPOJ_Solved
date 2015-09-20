#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int N,K,ans,i,pos;
	int *A;
	cin>>N;
	A=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	cin>>K;
	ans=A[0];
	pos=0;
	for(i=1;i<K;i++)
	{
		if(A[i]>=ans)
		{
			ans=A[i];
			pos=i;
		}
	}
	cout<<ans;
	for(;i<N;i++)
	{
		if(A[i]>=ans)
		{
			ans=A[i];
			pos=i;
		}
		else if(i-K==pos)
		{
			ans=A[i-K+1];
			pos=i-K+1;
			for(int j=i-K+2;j<=i;j++)
			{
				if(A[j]>=ans)
				{
					ans=A[j];
					pos=j;
				}
			}
		}
		cout<<" "<<ans;
	}
	cout<<endl;
	delete [] A;
	return 0;
}