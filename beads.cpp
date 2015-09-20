#include <iostream>
#include <string>
#include <vector>
using namespace std;

void findminpos(string str,vector<int> & pos)
{
	int l,minpos;
	char min;
	l=str.length();
	min=str[0];
	minpos=0;
	pos.clear();
	for(int i=1;i<l;i++)
	{
		if(str[i]<min)
		{
			pos.clear();
			min=str[i];
			minpos=i;
		}
		else if(str[i]==min)
		{
			pos.push_back(minpos);
			minpos=i;
		}
	}
	pos.push_back(minpos);
}

int main()
{
	std::ios::sync_with_stdio(false);
	int N,minpos,l;
	string bead,str;
	vector<int> pos,temp;
	char min;
	vector<int>::iterator it;
	cin>>N;
	while(N>0)
	{
		cin>>bead;
		l=bead.length();
		findminpos(bead,pos);
		str="";
		for(int i=1;i<l;i++)
		{
			if(pos.size()==1)
			{
				break;
			}
			temp.clear();
			it=pos.begin();
			minpos=*it;
			min=bead[((*it)+i)%l];
			it++;
			for(;it!=pos.end();it++)
			{
				if(bead[((*it)+i)%l]<min)
				{
					temp.clear();
					min=bead[((*it)+i)%l];
					minpos=*it;
				}
				else if(bead[((*it)+i)%l]==min)
				{
					temp.push_back(minpos);
					minpos=*it;
				}
			}
			temp.push_back(minpos);
			pos=temp;
			/*for(it=pos.begin();it!=pos.end();it++)
				str=str+str[(*it+i)%l];
			findminpos(str,temp);
			for(it=temp.begin();it!=temp.end();it++)
			{
				*it=pos[*it];
			}
			pos=temp;*/
		}
		cout<<pos[0]+1<<endl;
		/*
		min=bead[0];
		minpos=0;
		for(int i=1;i<l;i++)
		{
			if(bead[i]<min)
			{
				pos.clear();
				min=bead[i];
				minpos=i;
			}
			else if(bead[i]==min)
			{
				pos.push_back(minpos);
				minpos=i;
			}
		}
		pos.push_back(minpos);
		
		temp.clear();
		it=pos.begin();
		minpos=*it;
		min=bead[(*it)+1];
		minj=0;
		it++;
		for(;it!=pos.end();it++)
		{
			if(bead[(*it)+1]<min)
			{
				temp.clear();
				min=bead[(*it)+j];
				minpos=*it;
				minj=j;
			}
			else if(bead[(*it)+j]==min)
			{
				temp.push_back(minj);
				minpos=*it;
				j=minj;
			}
		}
		temp.push_back(minpos);
		pos.clear();
		for(it=temp.begin();it!=temp.end();it++)
		{
			pos.pushback(*it);
		}*/

		/*minpos=0;
		for(int i=1;i<l;i++)
		{
			for(int j=0;j<l;j++)
			{
				if(bead[(i+j)%l]>bead[(minpos+j)%l])
					break;
				else if(bead[(i+j)%l]<bead[(minpos+j)%l])
					minpos=i;
			}
		}
		cout<<minpos+1<<endl;*/
		N--;
	}
	return 0;
}