#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,len,i,j;
	bool ans;
	string str;
	cin>>T;
	while(T>0)
	{
		cin>>str;
		ans=true;
		len=str.size();
		for(i=0,j=len-1;i<=len/2;i++,j--)
		{
			if(str[i]!=str[j])
			{
				ans=false;
				break;
			}
		}
		if(ans)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		T--;
	}
	return 0;
}

