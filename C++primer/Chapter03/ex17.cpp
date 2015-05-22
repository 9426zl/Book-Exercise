#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	
	vector<string> svec;
	string word;
	
	while (cin >> word)
		svec.push_back(word);

	for (auto s: svec)
	{
		for (auto &c :s)
			c = toupper(c);
		cout << c << endl;
	}

	return 0;

}