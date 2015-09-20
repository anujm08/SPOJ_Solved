#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node
{
	bool isinlist[250];
	int count;
	vector<int> list1;
	node()
	{
		for(int i=0;i<250;i++)
		{
			isinlist[i]=false;
		}
		count=0;
	}
};

int main()
{
	std::ios::sync_with_stdio(false);
	int T,N,a,b,p,q;
	node *player;
	vector<int>::iterator it,iter;
	cin>>T;
	while(T>0)
	{
		cin>>N;
		player = new node[N];
		for(int i=0;i<N*(N-1)/2;i++)
		{
			cin>>a>>b;
			player[a-1].list1.push_back(b-1);
			player[a-1].isinlist[b-1]=true;
			player[a-1].count++;
		}
		p=1;
		q=0;
		for(int i=0;i<N;i++)
		{
			for(it=player[i].list1.begin();it!=player[i].list1.end();it++)
			{
				for(iter=player[*it].list1.begin();iter!=player[*it].list1.end();iter++)
				{
					if(!player[i].isinlist[*iter])
					{
						player[i].isinlist[*iter]=true;
						player[i].count++;
					}
				}
			}
			if(player[i].count>q)
			{
				p=i+1;
				q=player[i].count;
			}
		}
		cout<<p<<" "<<q<<endl;
		delete[] player;
		T--;
	}
	return 0;
}