#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

int main()
{
	vector<int> ivec(10, 2);

	for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
		*iter = 2 * (*iter);
	for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}