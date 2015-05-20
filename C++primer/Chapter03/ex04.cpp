#include <iostream>
#include <string>

using namespace::std;

//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//
//	if(s1 == s2)
//		cout << "s1 = s2" << endl;
//	else
//	{
//		if (s1 > s2)
//			cout << "s1 > s2 " << s1 << endl;
//		else
//			cout << "s1 < s2 " << s2 << endl;
//	}
//}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;

	int n1 = s1.size();
	int n2 = s2.size();
	
	if(n1 == n2)
		cout << "s1 = s2" << endl;
	else
	{
		if (n1 > n2)
			cout << "s1 > s2 " << s1 << endl;
		else
			cout << "s1 < s2 " << s2 << endl;
	}
}
	
