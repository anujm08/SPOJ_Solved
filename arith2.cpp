#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int i;
	long long int T,ans,operand;
	char op;
	string str;
	cin>>T;
	cin.ignore();
	while(T>0)
	{
		getline(cin,str);
		getline(cin,str);
		ans=0;
		operand=0;
		for(i=0;;i++)		
		{
			if(str[i]==' ')
			{
				continue;
			}
			if(str[i]>='0'&&str[i]<='9')
			{
				ans=ans*10+str[i]-'0';
			}
			else
				break;
		}
		op=str[i];
		i++;
		for(;;i++)
		{
			if(str[i]==' ')
				continue;
			if(str[i]>='0'&&str[i]<='9')
			{
				operand=operand*10+str[i]-'0';
			}
			else
			{
				switch(op)
				{
					case '+':	ans=ans+operand;
								break;
					case '-':	ans=ans-operand;
								break;
					case '*':	ans=ans*operand;
								break;
					case '/':	ans=ans/operand;
								break;
				}
				op=str[i];
				operand=0;
				if(op=='=')
					break;
			}
		}
		cout<<ans<<endl;
		T--;
	}
	return 0;
}