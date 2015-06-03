//
//  ex19.cpp
//  Exercise 9.19
//

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> slist;
	string str;

	while(cin >> str)
		slist.push_back(str);

	for(auto iter = slist.begin(); iter != slist.end(); ++iter)
		cout << *iter << endl;

	return 0;
}