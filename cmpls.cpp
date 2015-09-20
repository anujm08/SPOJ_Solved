#include <iostream>
using namespace std;

int updateterms(int terms[][2],int j,int i)
{
	int result = terms[0][0];
	for(int k=1;k<j;k++)
	{
		terms[k][0] = terms[k][0]*(i)/(i+1-terms[k][1]);//to update term multiply by x-1 which is i and divide by x-1-b which is i-terms[k][1]
		result += terms[k][0];
	}
	return result;
}

int main()
{
	int T,S,C,seq,i,j,terms[100][2],sum;
	cin>>T;
	while(T>0)
	{
		cin>>S>>C;
		j=0;
		cin>>seq;
		terms[0][0]=seq;
		j++;
		for(i=1;i<S;i++)
		{
			cin>>seq;
			sum=updateterms(terms,j,i);
			if(sum!=seq)
			{
				terms[j][0]=seq-sum;
				terms[j][1]=i+1;
				j++;
			}
		}
		for(;i<S+C-1;i++)
		{
			cout<<updateterms(terms,j,i)<<" ";

		}
		cout<<updateterms(terms,j,i)<<endl;
		//considerding sequence as a + sigma terms[i][0]*(x-1)(x-2)....(X-terms[i][1]-1)/(terms[i][1])!
		T--;
	}
	return 0;
}
