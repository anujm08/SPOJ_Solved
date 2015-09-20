#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct pixel
{
	int dist;
	bool isexplored;
	pixel()
	{
		isexplored=false;
	}
};

int main()
{
	std::ios::sync_with_stdio(false);
	int T,n,m,currow,curcol;
	string str;
	vector<int> queue,temp;
	vector<int>::iterator it;
	pixel **bit;
	cin>>T;
	while(T>0)
	{
		cin>>n>>m;
		bit=new pixel*[n];
		for(int i=0;i<n;i++)
		{
			bit[i]=new pixel[m];
		}
		for(int i=0;i<n;i++)
		{
			cin>>str;
			for(int j=0;j<m;j++)
			{
				if(str[j]-'0'==1)
				{
					bit[i][j].isexplored=true;
					bit[i][j].dist=0;
					queue.push_back(1000*i+j);
				}
			}
		}
		while(queue.size()>0)
		{
			temp.clear();
			for(it=queue.begin();it!=queue.end();it++)
			{
				currow=(*it)/1000;
				curcol=(*it)%1000;
				if(currow>0)
				{
					if(!bit[currow-1][curcol].isexplored)
					{
						bit[currow-1][curcol].isexplored=true;
						bit[currow-1][curcol].dist=bit[currow][curcol].dist+1;
						temp.push_back(1000*(currow-1)+curcol);	
					}
				}
				if(currow<n-1)
				{
					if(!bit[currow+1][curcol].isexplored)
					{
						bit[currow+1][curcol].isexplored=true;
						bit[currow+1][curcol].dist=bit[currow][curcol].dist+1;
						temp.push_back(1000*(currow+1)+curcol);	
					}
				}
				if(curcol>0)
				{
					if(!bit[currow][curcol-1].isexplored)
					{
						bit[currow][curcol-1].isexplored=true;
						bit[currow][curcol-1].dist=bit[currow][curcol].dist+1;
						temp.push_back(1000*(currow)+curcol-1);	
					}
				}
				if(curcol<m-1)
				{
					if(!bit[currow][curcol+1].isexplored)
					{
						bit[currow][curcol+1].isexplored=true;
						bit[currow][curcol+1].dist=bit[currow][curcol].dist+1;
						temp.push_back(1000*(currow)+curcol+1);	
					}
				}
			}
			queue=temp;
		}
		for(int i=0;i<n;i++)
		{
			cout<<bit[i][0].dist;
			{
				for(int j=1;j<m;j++)
					cout<<" "<<bit[i][j].dist;
			}
			cout<<endl;
		}
		for(int i=0;i<n;i++)
		{
			delete[] bit[i];
		}
		delete[] bit;
		T--;
	}
	return 0;
}