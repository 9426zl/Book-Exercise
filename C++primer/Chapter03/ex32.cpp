#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> ivec1;
	vector<int> ivec2;

	for (int index = 0; index != 10; ++index)
		ivec1.push_back(index);

	auto iter = ivec1.begin();
	for ( ; iter != ivec1.end(); ++iter)
		ivec2.push_back(*iter);

	auto iter = ivec2.begin();
	for (; iter != ivec2.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}