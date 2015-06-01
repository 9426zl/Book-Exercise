#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec1{0, 1, 2};
	vector<int> ivec2{0, 1, 2, 3, 5, 8};
	decltype(ivec1.size()) length = ivec1.size(), i = 0;
	int flag = 0;

	for(; i < length; ++i)
	{
		if(ivec1[i] != ivec2[i])
		{
				flag = 1;
				break;
		}
	}

	if(flag == 0)
		cout << "ivec1 is the prefixion of ivec2" << endl;
	else
		cout << "ivec2 is not the prefixion of ivec2" << endl;

	return 0;
}