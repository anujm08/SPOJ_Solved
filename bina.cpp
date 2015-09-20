#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,t=1;
	unsigned long long dividend,divisor;
	string s1,s2;
	cin>>T;
	while(t<=T)
	{
		cin>>s1;
		cin>>s2;
		dividend=0;
		divisor=0;
		for(int i=0;i<s1.length();i++)
		{
			dividend=dividend*2+s1[i]-'0';
		}
		for(int i=0;i<s2.length();i++)
		{
			divisor=divisor*2+s2[i]-'0';
		}
		if(divisor==0)
			cout<<"Case "<<t<<": "<<"NO"<<endl;
		else if(dividend%divisor==0)
			cout<<"Case "<<t<<": "<<"YES"<<endl;
		else
			cout<<"Case "<<t<<": "<<"NO"<<endl;
		t++;
	}
	return 0;
}