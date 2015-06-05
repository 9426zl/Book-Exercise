//
// Chapter10 Exercise01\02
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
	vector<int> ivec(10, 1);
	cout << count(ivec.begin(), ivec.end(), 1) << endl;

	list<string> slist(10, "alpha");
	cout << count(slist.cbegin(), slist.cend(), "alpha") << endl;

	return 0;
}