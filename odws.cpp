#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,t=1,size;
	long long ans,mod=1000000007,pow;
	string s1,s2;
	cin>>T;
	while(t<=T)
	{
		ans=0;
		pow=1;
		cin>>s1>>s2;
		size=s1.size();
		for(int i=size-1;i>=0;i--)
		{
			if(s2[i]-s1[i]>=0)
			{
				ans=(ans+(((s2[i]-s1[i])*pow)%mod))%mod;
			}
			else
			{
				ans=(ans+(((s2[i]-s1[i]+mod)*pow)%mod))%mod;
			}
			pow=(pow*26)%mod;
		}
		if(ans==0)
			ans=mod-1;
		else
			ans=ans-1;
		cout<<"Case "<<t<<": "<<ans<<endl;
		t++;
	}
	return 0;
}