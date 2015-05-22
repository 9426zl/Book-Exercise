#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

int main()
{
	vector<string> text;
	string word;
	
	while (cin >> word)
	{
		text.push_back(word);
	}

	auto iter = text.begin();

	for (auto it = (*iter).begin(); it != (*iter).end(); it++)
		*it = toupper(*it);

	for(; iter != text.end(); ++iter)
		cout << *iter << endl;

	return 0;
}