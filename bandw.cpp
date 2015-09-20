#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	string str1,str2;
	int ans;
	while(true)
	{
		cin>>str1>>str2;
		ans=0;
		if(str1=="*")
			break;
		for(int l=0,r=str1.size();l<=r;)
		{
			
			if(ans%2==0)
			{
				while(str1[l]==str2[l])
				{
					l++;
					if(l>r)
						break;
				}
				if(l>r)
					break;
				while(str1[r]==str2[r])
				{
					r--;
				}
			}
			else
			{
				while(str1[l]!=str2[l])
				{
					l++;
					if(l>r)
						break;
				}
				if(l>r)
					break;
				while(str1[r]!=str2[r])
				{
					r--;
				}
			}
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}