#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec(10, 1);
	int a[10];

	for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
		*a++ = *iter;

	for (int i = 0; i < 10; ++i)
		cout << a[i] << "";

	cout << endl;

	return 0;
}
