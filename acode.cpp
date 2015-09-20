#include <iostream>
#include <string>

using namespace std;

long long calcnCr(int n,int r)
{
	if(n<r)
		return 0;
	if(r>n/2)
		return calcnCr(n,n-r);
	long long ans =1;
	for(int k=0;k<r;k++)
	{
		ans = ans*(n-k)/(k+1);
	}
	return ans;
}

int main()
{
	long long ans,ways;
	int series;
	string str;
	while(true)
	{
		ans=1;
		cin>>str;
		if(str=="0")
			break;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='1'||str[i]=='2')
			{
				series=0;
				ways=0;
				while((str[i]=='1'||str[i]=='2')&&i<str.length()-1)
				{
					series++;
					i++;
				}
				if(str[i]=='0')
				{
					series--;
				}
				else if(str[i]<='6'||str[i-1]=='1')
				{
					series++;
				}
				for(int j=0;j<=series/2;j++)
				{
					ways = ways + calcnCr(series-j,j);
				}
				ans*=ways;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}