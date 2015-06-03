#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1{8, 1};
	vector<int> v2{8, 2};

	if(v1 == v2)
		cout << "v1 == v2" << endl;
	else
		cout << "v1 != v2" << endl;

	return 0;
}