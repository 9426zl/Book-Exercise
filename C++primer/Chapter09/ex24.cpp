//
//  CHapter09 Exercise24
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec{1, 2, 3, 4, 5, 6, 7};

	cout << ivec.at(0) << "\n";
	cout << ivec[0] << "\n";
	cout << ivec.front() << "\n";
	cout << *ivec.begin() << "\n";

	return 0;
}
