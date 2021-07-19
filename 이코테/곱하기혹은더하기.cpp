#include <iostream>

using namespace std;

int main(void)
{
	
	string str;
	int num;

	cin>>str; 


	int result = str[0] ^ '0';

	for(int i=1; i<str.length(); i++)
	{
		num = str[i] ^ '0';

		if( result > 0 && num > 0 )
			result *= num;

		else
			result += num;
	}

	cout<<"result : "<<result<<endl;

	return 0;	
}