//
// Chapter11 Exercise08
//

#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	set<string> exclude{"word", "exclude"};
	set<string> word_store;
	string word;

	while(cin >> word)
		if(exclude.find(word) == exclude.end())
			word_store.insert(word);

	for(auto iter : word_store)
		cout << iter;

	return 0;
}
