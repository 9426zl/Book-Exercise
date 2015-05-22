#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//	string s1("Hello");
//	string s2("World");
//
//	if (s1 > s2)
//		cout << s1 << endl;
//	else
//		cout << s2 << endl;
//
//	return 0;
//}

int main()
{
	char s1[] = "Hello";
	char s2[] = "World";

	if (strcmp(s1, s2) > 0)
		cout << s1 << endl;
	else
		cout << s2 << endl;

	return 0;
}