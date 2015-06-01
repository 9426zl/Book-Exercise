#include <iostream>

using namespace std;

int main()
{
	int i1, i2;
	while(cin >> i1 >> i2)
	{
		try
		{
			if(i2 == 0)
				throw runtime_error("The second number is 0.");
			cout << i1 / i2 << endl;
		}
		catch(runtime_error err)
		{
			cout << err.what()
				 << "\nTry Again? Entry y or n" << endl;
			char c;
			cin >> c;
			if(!cin || c=='n')
				break;
		}
	}
}