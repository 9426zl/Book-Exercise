//
// Chapter10 Exercise03
//

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> ivec(10, 1);
	cout << accumulate(ivec.begin(), ivec.end(), 0) << endl;

	return 0;
}
