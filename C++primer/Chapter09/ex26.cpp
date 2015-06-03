//
//  ex26.cpp
//  Exercise 9.26
//

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

	vector<int> ivec(ia, end(ia));
	list<int> ilist(ia, end(ia));
	decltype(ivec.begin()) iv = ivec.begin();
	decltype(ilist.begin()) il = ilist.begin();

	while(iv != ivec.end())
	{
		if(*iv%2 == 0)
			iv = ivec.erase(iv);
		else
			iv++;
	}

	while(il != ilist.end())
	{
		if(*il%2 != 0)
			il = ilist.erase(il);
		else
			il++;
	}

	cout << "vector:";
	for(iv = ivec.begin(); iv != ivec.end(); iv++)
		cout << *iv << " ";
	cout << endl;

	cout << "list  :";
	for(il = ilist.begin(); il != ilist.end(); il++)
		cout << *il << " ";
	cout << endl;

	return 0;
}


