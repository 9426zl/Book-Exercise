//
// Chapter10 Exercise06
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec{1, 2, 3, 4, 5};
	fill_n(ivec.begin(), ivec.end(), 2);

	for(auto i : ivec)
		cout << i << " ";
	cout << endl;

	return 0;
}
