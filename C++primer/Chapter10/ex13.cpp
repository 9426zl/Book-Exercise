//
// Chapter10 Exercise13
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

inline
bool judgeLength(const string &str)
{
	return str.size() >= 5;
}

int main()
{
	vector<string> svec(10, "aaaaaa");
	auto send = partition(svec.begin(), svec.end(), judgeLength);
	auto iter = svec.begin();

	for(; iter != send; ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}