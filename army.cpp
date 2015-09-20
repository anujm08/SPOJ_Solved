#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T,NG,NM,maxG,power;
	bool ans;
	cin>>T;
	while(T>0)
	{
		maxG=0;
		ans=false;
		cin>>NG>>NM;
		for(int i=0;i<NG;i++)
		{
			cin>>power;
			if(power>maxG)
				maxG=power;
		}
		for(int i=0;i<NM;i++)
		{
			cin>>power;
			if(power>maxG)
				ans=true;
		}
		if(ans)
			cout<<"MechaGodzilla"<<endl;
		else
			cout<<"Godzilla"<<endl;
		T--;
	}
	return 0;
}

