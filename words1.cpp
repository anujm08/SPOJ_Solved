#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool ispresent(vector<int> v,int i);

class alphabet
{
	public:
		int edgesused,start,end;
		bool edgetoitself;
		vector<int> edgeto;
		alphabet()
		{
			edgesused=0;
			start=0;
			end=0;
			edgetoitself=false;
		}
		void clean()
		{
			edgesused=0;
			start=0;
			end=0;
			edgeto.clear();
			edgetoitself=false;
		}

};

int main()
{
	std::ios::sync_with_stdio(false);
	int T,N,starting,ending,ans,current;
	string str;
	alphabet alpha[26];
	vector<int> leftalpha;

	cin>>T;
	while(T>0)
	{
		starting=-1;
		ending=-1;
		ans=true;
		for(int i=0;i<26;i++)
		{
			alpha[i].clean();
		}
		cin>>N;

		for(int i=0;i<N;i++)
		{
			cin>>str;
			if(str.length()!=1&&str[0]!=str[str.length()-1])
			{
				alpha[str[0]-'a'].edgeto.push_back(str[str.length()-1]-'a');
				alpha[str[0]-'a'].start++;
				alpha[str[str.length()-1]-'a'].end++;
			}
			else
			{
				alpha[str[0]-'a'].edgetoitself=true;
			}
		}

		for(int i=0;i<26;i++)
		{
			if(alpha[i].start==alpha[i].end)
				continue;
			else if((alpha[i].start==alpha[i].end+1)&&(starting==-1))
				starting=i;
			else if((alpha[i].end==alpha[i].start+1)&&(ending==-1))
				ending=i;
			else
			{
				ans=false;
				break;
			}
		}
		if(((starting!=-1)&&(ending==-1))||((ending!=-1)&&(starting==-1)))
		{	
			ans=false;

		}
		if(ans)
		{
			if(starting==-1)
			{
				for(int i=0;i<26;i++)
				{
					if(alpha[i].start!=0)
					{
						starting=i;
						ending=i;
						break;
					}
				}
			}
			if(starting!=-1)
			{
				current=starting;
				bool firstiteration;
				while(true)
				{
					firstiteration=true;
					while(true)
					{
						if(alpha[current].edgesused<alpha[current].start-1)//because 1 is going to be used
						{
							if(!ispresent(leftalpha,current))
							{
								leftalpha.push_back(current);
							}
						}
						else if(ispresent(leftalpha,current))
						{
							leftalpha.erase(std::remove(leftalpha.begin(), leftalpha.end(), current), leftalpha.end());
						}
						if(current==ending&&firstiteration==false)
						{
							if(alpha[current].edgesused==alpha[current].start)
							{
								break;
							}
						}
						alpha[current].edgesused++;
						current=alpha[current].edgeto[alpha[current].edgesused-1];
						firstiteration=false;
					}
					if(leftalpha.size()==0)
						break;
					starting=leftalpha[0];
					ending=leftalpha[0];
					current=leftalpha[0];
				}
				for(int i=0;i<26;i++)
				{
					if(alpha[i].edgesused!=alpha[i].start)
					{	
						ans=false;
						break;
					}
					if(alpha[i].edgetoitself==true&&alpha[i].end==0&&alpha[i].start==0)
					{	
						ans=false;
						break;
					}
				}
			}
			else
			{
				int count=0;
				for(int i=0;i<26;i++)
				{
					if(alpha[i].edgetoitself)
						count++;
				}
				if(count>1)
				{
					ans=false;
				}
			}
		}
		if(ans)
		{
			cout<<"Ordering is possible."<<endl;
		}
		else
		{
			cout<<"The door cannot be opened."<<endl;
		}
		T--;
	}
	return 0;
}

bool ispresent(vector<int> v,int i)
{
	vector<int>::iterator ite;
	ite = find (v.begin(), v.end(), i);
	if (ite != v.end())
		return true;
	else
		return false;
}
