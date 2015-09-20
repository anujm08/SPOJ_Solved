#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int i,j,n1,n2,a[10000],b[10000];
	long long sum1,sum2,ans;
	while(true)
	{
		cin>>n1;
		if(n1==0)
			break;
		for(i=0;i<n1;i++)
		{
			cin>>a[i];
		}
		cin>>n2;
		for(i=0;i<n2;i++)
		{
			cin>>b[i];
		}
		i=0;
		j=0;
		sum1=0;
		sum2=0;
		ans=0;
		while(i<n1&&j<n2)
		{
			if(a[i]<b[j])
			{
				sum1+=a[i];
				i++;
			}
			else if(b[j]<a[i])
			{
				sum2+=b[j];
				j++;
			}
			else
			{
				if(sum1>=sum2)
					ans=ans+sum1+a[i];
				else
					ans=ans+sum2+a[i];
				i++;
				j++;
				sum1=0;
				sum2=0;
			}
		}
		while(i<n1)
		{
			sum1+=a[i];
			i++;
		}
		while(j<n2)
		{
			sum2+=b[j];
			j++;
		}
		if(sum1>=sum2)
			ans+=sum1;
		else
			ans+=sum2;
		cout<<ans<<endl;
	}
	return 0;
}