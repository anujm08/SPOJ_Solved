#include <iostream>
using namespace std;
long long calcknifecut(long long N)
{
	long long res=0,n=1;
	while(N>n)
	{
		
		n*=2;;
		res++;
	}
	return res;
}
int main()
{
	std::ios::sync_with_stdio(false);
	long long T,t=1,N,M,K,ans1,ans2;
	cin>>T;
	while(t<=T)
	{
		cin>>N>>M>>K;
		ans1=N*M*K-1;
		ans2=calcknifecut(N)+calcknifecut(M)+calcknifecut(K);	
		cout<<"Case #"<<t<<": "<<ans1<<" "<<ans2<<endl;
		t++;
	}
	return 0;
}