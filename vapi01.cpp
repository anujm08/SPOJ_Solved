#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,N,key[26],ans;
	string str;
	cin>>T;
	while(T>0)
	{
		cin>>N;
		cin>>str;
		ans=0;
		for(int i=0;i<26;i++)
		{
			key[i]=0;
		}
		for(int i=0;i<2*N-2;i=i+2)
		{
			key[str[i]-'a']++;
			if(key[str[i+1]-'A']>0)
			{
				key[str[i+1]-'A']--;
			}
			else
			{
				ans++;
			}
		}
		cout<<ans<<endl;
		T--;
	}
	return 0;
}

