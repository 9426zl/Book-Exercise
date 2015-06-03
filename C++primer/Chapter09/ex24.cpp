//
//  ex24.cpp
//  Exercise 9.24
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;

	cout << ivec.at(0) << "\n";
	cout << ivec[0] << "\n";
	cout << ivec.front() << "\n";
	cout << *ivec.begin() << "\n";

	return 0;
}