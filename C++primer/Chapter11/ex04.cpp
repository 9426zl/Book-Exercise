//
// Chapter11 Exericse04
//

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using std::map; using std::string; using std::cin;
using std::remove_if; using std::cout;

void word_count(map<string, size_t> &sm)
{
	string word;
	while(cin >> word)
	{
		word.erase(remove_if(word.begin(), word.end(), isspace), word.end());
		word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());

		transform(word.begin(), word.end(), word.begin(), tolower);

		++sm[word];
	}

	for(const &elem : sm)
		cout << elem.first << ":" << elem.second << "\n";
}

int main()
{
	map<string, size_t> sm;
	word_count(sm);

	return 0;
}

