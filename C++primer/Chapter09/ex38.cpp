//
// Chapter09 Exercise38
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> svec;
	string word;

	while(cin >> word)
	{
		svec.push_back(word);
		cout << svec.capacity() << "\n";
	}

	return 0;
}
