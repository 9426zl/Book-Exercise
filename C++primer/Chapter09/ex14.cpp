#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<const char*> ilist{"apple", "bravo", "charlie"};
	vector<string> svec;
	
	svec.assign(ilist.cbegin(), ilist.cend());

	for(const auto &vec : svec)
		cout << vec;

	cout << endl;

	return 0;
}