#include <iostream>

using namespace std;

int main()
{
	int i1, i2;
	cin >> i1 >> i2;
	
	if(i2 == 0)
		throw runtime_error("The second number is 0.");

	cout << i1 / i2 << endl;

	return 0;
}