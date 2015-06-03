#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> ilist(8, 1);
	vector<double> dvec(8, 2.0);
	vector<int> ivec(8, 3);
	decltype(dvec.size()) n = 0, index = dvec.size();
	
	dvec.assign(ilist.begin(), ilist.end());

	for(; n != index; ++n)
	{
		cout << dvec[n] << " ";
	}

	cout << endl;

	dvec.assign(ivec.begin(), ivec.end());

	for(n = 0; n != index; ++n)
	{
		cout << dvec[n] << " ";
	}

	cout << endl;

	return 0;
}