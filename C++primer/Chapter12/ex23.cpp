//
// Chapter12 Exercise23
//

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	char* catWord = new char[255]();
	
	strcat(catWord, "Alpha, ");
	strcat(catWord, "Beta.");

	cout << catWord << endl;
	delete [] catWord;

	string str1{"Alpha, "}, str2{"Beta."};
	cout << str1+str2 << endl;

	return 0;
}