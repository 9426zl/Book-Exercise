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
	vector<string> svec{"alpha", "Beta", "Chalie", "David", "Eagle"};
	auto send = partition(svec.begin(), svec.end(), judgeLength);
	auto iter = svec.begin();
    auto index = send - iter;
    
	cout << ((index >= 5) ? "There is more than 5 items":
							"There is less than 5 items") << endl;

	for(; iter != send; ++iter)
		cout << *iter << " ";
	cout << endl;
	
	return 0;
}
