//
// Chapter10 Exercise24
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

inline bool
check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}



int main()
{
	vector<int> ivec{1, 2, 3, 4, 5, 6};
	string s = "alpha";

	auto check = bind(check_size, s, _1);

	for(auto iter : ivec)
	{
		if(!check(*iter))
		{
			cout << "The first element is " 
			<< *iter << endl;
			break;
		}
	}

	return 0;
}




}