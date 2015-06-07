//
// Chapter11 Exercise07
//

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<string>> familyName;
	char flag;
	string lastName = " ", childName = " ";
	vector<string> firstName;

	cout << "Please entry new family and members of the family:\n";
	while(lastName != "q")
	{
		cout << "Please entry the last name:";
		cin >> lastName;
			
		while(childName != "q")
		{
			cout << "Please entry the first name:";
			cin >> childName;
			firstName.push_back(childName);
		}
		
		familyName.insert(make_pair(lastName, firstName));
	}
	for(auto iter : familyName)
	{
		cout << iter.first << ":";
		for(auto citer : iter.second)
			cout << citer << " ";
		cout << "\n";
	}

	return 0;
}