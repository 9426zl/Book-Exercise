//
// Chapter10 Exercise34
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec(10, 1);

	for(auto riter = ivec.crbegin(); riter != ivec.crend(); ++riter)
		cout << *riter << " ";
	cout << endl;

	return 0;
}