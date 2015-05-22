#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main()
{
	vector<int> ivec;
	int i;
	
	while(cin >> i)
	{
		ivec.push_back(i);
	}

	for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << endl;
	return 0;
}