//
// Chapter10 Exercise42
//

#include <iostream>
#include <list>
#include <string>

using namespace std;

void elimDups(list<string> &words)
{
	words.sort();
	words.unique();
}

int main()
{
	list<string> slist{"a", "aaaa", "aaa", "aa"};
	
	elimDups(slist);

	for(const auto &elem : slist)
		cout << elem << " ";
	cout << endl;

	return 0;
}