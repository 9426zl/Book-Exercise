#include <iostream>
#include <string>

using namespace::std;

int main()
{
	string s, word;

	while(cin >> word)
	{
		s += word;
	}
	cout << s << endl;
}