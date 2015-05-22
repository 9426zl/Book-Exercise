#include <iostream>

using namespace std;

int main()
{
	int a[10];
	
	for (int* ptr = a; ptr != a+10; ptr++)
		*ptr = 0;

	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";

	cout << endl;
	return 0;
}
