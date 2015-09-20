#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T,i,num[3];
	cin>>T;
	cin.ignore();
	bool exist[3];
	string str;
	while(T>0)
	{
		cin.ignore();
		getline(cin,str);
		i=0;
		for(int j=0;j<3;j++)
		{
			num[j]=0;
			for(;str[i]!=' '&&str[i]!='m'&&i<str.length();i++)
			{	
				num[j]=num[j]*10+(str[i]-'0');
			}
			if(str[i]=='m')
				exist[j]=false;
			else
				exist[j]=true;
			if(j!=2)
			{
				while(str[i]!='+'&&str[i]!='=')
				{
					i++;
				}
				i+=2;
			}
		}
		if(exist[0]&&exist[1])
		{
			num[2]=num[0]+num[1];
		}
		else if(exist[0]&&exist[2])
		{
			num[1]=num[2]-num[0];
		}
		else
		{
			num[0]=num[2]-num[1];
		}
		cout<<num[0]<<" + "<<num[1]<<" = "<<num[2]<<endl;
		T--;
	}
	return 0;
}
