#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int opening,closing,ans,k=1;
	string str;
	while(true)
	{
		cin>>str;
		if(str[0]=='-')
			break;
		opening=0;
		closing=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='{')
			{
				opening++;
			}
			else
			{
				if(opening>0)
					opening--;
					else
					closing++;
			}
		}
		ans=(opening+1)/2+(closing+1)/2;
		cout<<k<<". "<<ans<<endl;
		k++;
	}
	return 0;
}

