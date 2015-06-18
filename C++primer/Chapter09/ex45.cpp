//
// Chapter09 Exercise45
//

#include <iostream>
#include <string>

using namespace std;

string pre_suf_append(const string &name, const string &pre, const string &suf)
{
	string ret(name);
	ret.insert(0, pre);
	ret.append(suf);

	return ret;
}

int main()
{
	string name("King");
	cout << pre_suf_append(name, "Mr.", "Jr.") << endl;

	return 0;
}