#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;

	while(cin >> s2)
	{
		if(s2 == s1)
			break;
		else
			s1 = s2;
	}

	if((!s1.empty()) && s1==s2)
		cout << s2 << " has repeated!" << endl;
	else
		cout << "There is no repeated words" << endl;

	return 0;
}