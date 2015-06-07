//
// Chapter11 Exercise23
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	multimap<string, string> Name;
	string lastName, firstName;

	while(cin >> lastName >> firstName)
		Name.emplace(lastName, firstName);
	
	for(const auto &iter : Name)
		cout << iter.second << " " << iter.first << endl;

	return 0;
}