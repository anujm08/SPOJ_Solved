#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	string N;
	int carry;
	while(!cin.eof())
	{
		N="0";
		cin>>N;
		if(N=="0")
			continue;
		if(N=="1")
			cout<<"1"<<endl;
		else
		{
			for(int i=N.length()-1;i>=0;i--)
			{
				if(N[i]=='0')
				{
					N[i]='9';
				}
				else
				{
					N[i]--;
					break;
				}
			}
			carry=0;
			for(int i=N.length()-1;i>=0;i--)
			{
				switch(N[i])
				{
					case '1':	N[i]='2'+carry;
								carry=0;
								break;
					case '2':	N[i]='4'+carry;
								carry=0;
								break;
					case '3':	N[i]='6'+carry;
								carry=0;
								break;
					case '4':	N[i]='8'+carry;
								carry=0;
								break;
					case '5':	N[i]='0'+carry;
								carry=1;
								break;
					case '6':	N[i]='2'+carry;
								carry=1;
								break;
					case '7':	N[i]='4'+carry;
								carry=1;
								break;
					case '8':	N[i]='6'+carry;
								carry=1;
								break;
					case '9':	N[i]='8'+carry;
								carry=1;
								break;
					case '0':	N[i]='0'+carry;
								carry=0;
								break;
				}
			}	
			if(carry==1)
				cout<<"1";
			cout<<N<<endl;
		}

	}
	return 0;
}