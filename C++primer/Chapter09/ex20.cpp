//
//  Chapter09 Exercise20

#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> ilist{1, 2, 3, 4, 5, 6};
	deque<int> ideq1, ideq2;

	for(auto iter = ilist.begin(); iter != ilist.end(); iter++)
		((*iter/2) == 0) ? ideq2.push_back(*iter): ideq1.push_back(*iter);

	cout << "The deque of odd numbers:";
	for(auto i : ideq1)
		cout << i << " ";
	cout << endl;

	cout << "The deque of even numbers:";
	for(auto i: ideq2)
		cout << i << " ";
	cout << endl;

	return 0;
}

	
