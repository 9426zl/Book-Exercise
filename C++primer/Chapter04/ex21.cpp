#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>ivec{0, 1, 2, 3, 4, 5};
	for(auto iter = ivec.begin(); iter != ivec.end(); ++iter)
		*iter = ((*iter%2 == 0) ? *iter, *iter*2);

	for(auto iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << " ";

	cout << endl;
	return 0;
}