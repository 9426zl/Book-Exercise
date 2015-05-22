#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> ivec;
	int i;
	decltype(ivec.size()) index, index2, length;
	
	while(cin >> i)
	{
		ivec.push_back(i);
	}

	length = ivec.size() - 1;
	index = 0;
	index2 = length - index;

	//for (index = 0; index < length - 1; index += 2)
	//	cout << ivec[index] + ivec[index + 1] << endl;

	for (; index < index2; index += 1, index2 = length - index)
	{
		cout << ivec[index] + ivec[index2] << endl;
	}

	if (length%2 != 0)
		cout << "The middle element is not matched." << endl;
}