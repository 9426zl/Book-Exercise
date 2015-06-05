//
// Chapter10 Exercise18
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies(vector<string> &words,
	vector<string>::size_type sz)
{
	elimDups(words);

	auto wc = partition(words.begin(), words.end(),
		[sz](const string &a)
			{ return a.size() >= sz;});

	for(auto iter = words.begin(); iter != wc; ++iter)
		cout << *iter << " ";

	cout << endl;
}

int main()
{
	vector<string> svec(10, "aa");

	biggies(svec, 1);

	return 0;
}