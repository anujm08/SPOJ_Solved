#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int i,N,ymax,ymaxlocal,curx,ans=0;
	int *X,*Y;
	X=new int[N];
	Y=new int[N];
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>X[i]>>Y[i];
	}
	ymax=-1;
	i=N-1;
	while(i>=0)
	{
		curx=X[i];
		ymaxlocal=Y[i];
		i--;
		while(X[i]==curx)
		{
			if(Y[i]>ymaxlocal)
			{
				ymaxlocal=Y[i];
			}
			i--;
		}
		if(ymaxlocal>ymax)
		{
			ymax=ymaxlocal;
			ans++;
		}
	}
	cout<<ans<<endl;
	delete[] X;
	delete[] Y;
	return 0;
}

