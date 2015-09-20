#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct node
{
	bool isexplored;
	vector<int> edgeto;
	vector<int> edgefrom;
	node()
	{
		isexplored=false;
	} 
};

void allottime(node* person,int* sequence,int N);
int calcSCC(node* person,int* sequence,int N);
void timeDFS(node* person,int i,int* sequence,int& t);
void finalDFS(node* person,int i);

int main()
{
	std::ios::sync_with_stdio(false);
	int T,N,ans;
	int* sequence;
	string str;
	node* person;
	cin>>T;
	while(T>0)
	{
		cin>>N;
		person=new node [N];
		sequence=new int [N];
		for(int i=0;i<N;i++)
		{
			cin>>str;
			for(int j=0;j<N;j++)
			{
				if(str[j]=='Y')
				{
					person[i].edgeto.push_back(j);
					person[j].edgefrom.push_back(i);
				}
			}
		}
		allottime(person,sequence,N);
		ans=calcSCC(person,sequence,N);
		delete [] person;
		delete [] sequence;
		cout<<ans<<endl;
		T--;
	}

	return 0;
}

void allottime(node* person,int* sequence,int N)
{
	int t=0;
	for(int i=N-1;i>=0;i--)
	{
		if(!person[i].isexplored)
		{
			timeDFS(person,i,sequence,t);
		}
	}
}

int calcSCC(node* person,int* sequence,int N)
{
	int group=0;
	for(int t=N-1;t>=0;t--)
	{
		if(person[sequence[t]].isexplored)
		{
			group++;
			finalDFS(person,sequence[t]);
		}
	}
	return group;
}

void timeDFS(node* person,int i,int* sequence,int& t)
{
	person[i].isexplored=true;
	vector<int>::iterator it;
	for(it=person[i].edgefrom.begin();it!=person[i].edgefrom.end();it++)
	{
		if(!person[*it].isexplored)
		{
			timeDFS(person,*it,sequence,t);
		}
	}
	sequence[t]=i;
	t++;
}

void finalDFS(node* person,int i)
{
	person[i].isexplored=false;
	vector<int>::iterator it;
	for(it=person[i].edgeto.begin();it!=person[i].edgeto.end();it++)
	{
		if(person[*it].isexplored)
		{
			finalDFS(person,*it);
		}
	}
}