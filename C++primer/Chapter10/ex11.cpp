//
// Chapter10 Exercise11
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::ostream; using std::vector; using std::string;
using std::cout; using std::endl; using std::sort; using std::stable_sort;


bool is_shorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

inline void printVec(const vector<string> &seq)
{
	for(auto const& i : seq)
		cout << i << " ";
	cout << endl;
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	printVec(words);

	auto end_unique = unique(words.begin(), words.end());
	printVec(words);

	words.erase(end_unique, words.end());
	printVec(words);
}


int main()
{
	vector<string> words{"a", "a", "b", "b", "cff", "cff"};

	elimDups(words);
	stable_sort(words.begin(), words.end(), is_shorter);
	printVec(words);

	return 0;
}