#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2, s;

	do
	{
		cout << "Entry two strings, please." << endl;
		cin >> s1 >> s2;
		s = (s1.size() < s2.size()) ? s1: s2;
		cout << s << endl;
	}while(cin);

	return 0;

}
