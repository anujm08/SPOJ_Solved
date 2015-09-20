#include <iostream>
using namespace std;

int* mergesort(int height[],int l,int r)
{
	int *A,*B,*C;
	C=new int[r-l];
	if(r-l==1)
	{
		C[0]=height[l];
		return C;
	}
	int Asize,Bsize,a=0,b=0,c=0;
	Asize=(l+r)/2-l;
	Bsize=r-(l+r)/2;
	A=mergesort(height,l,(l+r)/2);
	B=mergesort(height,(l+r)/2,r);
	while(a<Asize&&b<Bsize)
	{
		if(A[a]<=B[b])
		{
			C[c++]=A[a++];
		}
		else
		{
			C[c++]=B[b++];
		}
	}
	if(a!=Asize)
	{
		while(a<Asize)
		{
			C[c++]=A[a++];
		}
	}
	else
	{
		while(b<Bsize)
		{
			C[c++]=B[b++];
		}
	}
	return C;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T,N,K,height[20000],*sorted,min,diff;
	cin>>T;
	while(T>0)
	{
		cin>>N>>K;
		for(int i=0;i<N;i++)
		{
			cin>>height[i];
		}
		sorted=mergesort(height,0,N);
		//for(int i=0;i<N;i++)
		//	cout<<sorted[i]<<"  ";
		min=sorted[K-1]-sorted[0];
		for(int i=1;i<=N-K;i++)
		{
			diff=sorted[K+i-1]-sorted[i];
			if(diff<min)
				min=diff;
		}
		cout<<min<<endl;
		T--;
	}
	return 0;
}