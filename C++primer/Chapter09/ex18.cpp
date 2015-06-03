//
//  ex18.cpp
//  Exercise 9.18
//

#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
	deque<string> sdeq;
	string str;

	while(cin >> str)
		sdeq.push_back(str);

	for(auto iter = sdeq.begin(); iter != sdeq.end(); ++iter)
		cout << *iter << endl;

	return 0;
}