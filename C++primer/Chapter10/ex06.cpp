//
// Chapter10 Exercise06
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec(10, 1);
	fill_n(ivec.begin(), ivec.end(), 2);

	for(auto i : ivec)
		cout << i << " ";
	cout << endl;

	return 0;
}
