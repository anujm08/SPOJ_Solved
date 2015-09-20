#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,score,n1,n2,n3;
	bool strike,spare;
	cin>>T;
	while(T>0)
	{
		score=0;
		strike=false;
		spare=false;
		for(int i=0;i<10;i++)
		{
			cin>>n1;
			score+=n1;
			if(spare)
			{
				score+=n1;
				spare=false;
			}
			if(strike)
			{
				score+=n1;
				strike=false;
				spare=true;
			}
			if(n1==10)
			{
				if(i==9)
				{
					cin>>n2>>n3;
					score=score+n2+n3;
					if(spare)
					{
						score+=n2;
					}
				}
				else
				{
					strike=true;
				}
			}
			else
			{
				cin>>n2;
				score+=n2;
				if(spare)
				{
					score+=n2;
					spare=false;
				}
				if(n1+n2==10)
				{
					if(i==9)
					{
						cin>>n3;
						score+=n3;
					}
					else
					{
						spare=true;
					}
				}
			}		
		}
		cout<<score<<endl;
		T--;
	}
	return 0;
}