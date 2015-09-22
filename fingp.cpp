#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool isless(string str1,string str2)
{
	int l1,l2;
	l1=str1.length();
	l2=str2.length();
	for(int i=0;i<l1&&i<l2;i++)
	{
		if(str1[i]<str2[i])
			return true;
		else if(str1[i]>str2[i])
			return false;
	}
	if(l1<l2)
		return true;
	else
		return false;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int N,l,ans,minindex;
	string sp,str;
	vector<string> f;
	ans=0;
	getline(cin,sp);
	l=sp.length();
	cin>>N;
	cin.ignore();
	f.resize(N);
	for(int i=0;i<N;i++)
	{
		getline(cin,str);
		//cout<<str<<endl;
		if(str.length()>=l)
		{
			if(str.substr(str.length()-l,l)==sp)
			{
				f[ans]=str;	
				ans++;
				//cout<<str<<endl;
			}
		}
	}
	if(ans==0)
	{
		cout<<"Wrong fingerprints!"<<endl;
	}
	else
	{
		cout<<ans<<endl;
		sort(f.begin(),f.begin()+ans, isless);
		for(int i=0;i<ans;i++)
		{
			cout<<f[i]<<endl;
		}
	}
	return 0;
}

