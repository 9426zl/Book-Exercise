//
// Chapter09 Exercise41
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<char> cvec{'a', 'b', 'c', 'd', 'e'};
	string str(cvec.begin(), cvec.end());

	cout << str << endl;

	return 0;
}
