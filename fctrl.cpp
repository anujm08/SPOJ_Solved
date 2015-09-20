#include <iostream>
using namespace std;

int main()
{
	int T,N,powerof5,ans;
	cin>>T;
	while(T>0)
	{
		cin>>N;
		powerof5=5;
		ans=0;
		while(powerof5<=N)
		{
			ans = ans+ N/powerof5;
			powerof5 *= 5;
		}
		cout<<ans<<endl;
		T--;
	}
	return 0;
}
