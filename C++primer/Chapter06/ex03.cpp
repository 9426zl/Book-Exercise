#include <iostream>

using namespace std;

int fact(int val)
{
	int ret = 1;
	
	for(int i = 1; i <= val; ++i)
		ret *= i;

	return ret;
}

int main()
{
	int n;
	
	cin >> n;
	cout << fact(n) << endl;

	return 0;
}