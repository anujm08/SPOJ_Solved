#include <iostream>
using namespace std;

int main()
{
	int A,B,C;
	while(true)
	{
		cin>>A>>B>>C;
		if(A==0&&B==0&&C==0)
			break;
		if(B-A==C-B)
			cout<<"AP "<<C+B-A<<endl;
		else
			cout<<"GP "<<C*B/A<<endl;
	}
	return 0;
}
