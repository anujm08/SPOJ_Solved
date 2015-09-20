#include <iostream>
using namespace std;

int minm(int A,int B,int C)
{
	int ans=A;
	if(B<ans)
		ans=B;
	if(C<ans)
		ans=C;
	return ans;
}
int minm(int A,int B)
{
	if(A<=B)
		return A;
	else
		return B;
}

int minm(int A[3],int B)
{
	int ans=B;
	for(int i=0;i<3;i++)
	{
		if(A[i]<ans)
		{
			ans=A[i];
		}
	}
	return ans;
}

int main()
{
	int N,t=1,value[3],cost[3],tempcost[2];
	while(true)
	{
		cin>>N;
		if(N==0)
			break;
		for(int j=0;j<3;j++)
		{
			cin>>value[j];
		}
		cost[0]=value[1];
		cost[1]=value[1];
		cost[2]=minm(value[1],value[1]+value[2]);
		for(int i=1;i<N;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>value[j];
			}
			tempcost[0]=minm(cost[1],cost[0])+value[0];
			tempcost[1]=minm(cost,tempcost[0])+value[1];
			cost[2]=minm(cost[1],cost[2],tempcost[1])+value[2];
			cost[0]=tempcost[0];
			cost[1]=tempcost[1];
		}
		cout<<t<<". "<<cost[1]<<endl;
		t++;
	}
	return 0;
}
