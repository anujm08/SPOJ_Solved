#include <iostream>
using namespace std;

int* mergesort(int P[],int l,int r)
{
	int *C;
	if(r==l+1)
	{
		C=new int[1];
		C[0]=P[l];
		return C;
	}
	int* A,*B;
	int a=0,b=0,c=0,asize,bsize;
	A=mergesort(P,l,(l+r)/2);
	B=mergesort(P,(l+r)/2,r);
	asize=(l+r)/2-l;
	bsize=r-(l+r)/2;
	C=new int[r-l];
	while(a<asize&&b<bsize)
	{
		if(A[a]<=B[b])
			C[c++]=A[a++];
		else
			C[c++]=B[b++];
	}
	while(a<asize)
	{
		C[c++]=A[a++];
	}
	while(b<bsize)
	{
		C[c++]=B[b++];
	}
	return C;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int N,*A,ans;
	while(true)
	{
		cin>>N;
		A=new int[N];
		if(N==0)
			break;
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		A=mergesort(A,0,N);
		ans=0;
		for(int i=0;i<N;i++)
		{
			if(A[i]>=N-i)
			{
				ans=N-i;
				break;
			}	
		}
		cout<<ans<<endl;

		delete[] A;
	}
	return 0;
}