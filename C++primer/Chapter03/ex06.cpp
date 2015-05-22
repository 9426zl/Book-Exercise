#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s("hello world");
	//cin >> s;

	for (auto &c : s)
	{
		if (!isspace(c))
			c = 'x';
	}
	cout << s << endl;

}