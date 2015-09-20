#include <iostream>
#include <vector>
using namespace std;

struct node
{
	int value;

};

int main()
{
	std::ios::sync_with_stdio(false);
	int i,j,N,P[3000],count;
	vector<int> A;
	P[0]=2;
	P[1]=3;
	count=2;
	A.push_back(5);
	for(int i=6;i<34000;i=i+6)
	{
		A.push_back(i+1);
		A.push_back(i+5);
	}
	for(;count<3000;count++)
	{
		P[count]=A[0];
		for(int k=0;k<A.size();k=k+P[count])
		{
			A.erase(A.begin()+k);
			k--;
		}
	}
	while(true)
	{
		cin>>N;
		if(N==0)
			break;
		cout<<P[N-1]<<endl;
	}
	return 0;
}