//
// Chapter10 Exercise03
//

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> ivec{1, 2, 3, 4, 5, 6};
	cout << accumulate(ivec.begin(), ivec.end(), 0) << endl;

	return 0;
}
