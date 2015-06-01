#include <iostream>

using namespace std;

int count_calls()
{
	static int cnt = 0;
	return ++cnt;
}

int main()
{
	for(int i = 0; i <= 9; ++i)
		cout << count_calls() << endl;

	return 0;
}