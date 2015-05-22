#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s("Hello World");
	int i, h;
	h = s.size();

	for (i = 0; i < h; i++)
		s[i] = 'X';
	cout << s << endl;
	return 0;
}