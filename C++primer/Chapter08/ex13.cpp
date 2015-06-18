//
// Chapter08 Exercise13
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using std::string; using std::vector; using std::ifstream;
using std::istringstream; using std::ostringstream; using std::cerr;
using std::cout; using std::endl;


struct PersonInfo {
	string name;
	vector<string> phones;
};

bool valid(const string& str)
{
    return isdigit(str[0]);
}

string format(const string& str)
{
    return str.substr(0,3) + "-" + str.substr(3,10);
}

int main()
{
	ifstream ifs("info.txt");

	string line, word;
	vector<PersonInfo> people;

	while(getline(ifs, line))
	{
		PersonInfo info;
		istringstream record(line);
		record >> info.name;
		while(record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	for (const auto &entry : people)
    {
        ostringstream formatted, badNums;
        for (const auto &nums : entry.phones)
            if (!valid(nums)) badNums << " " << nums;
            else formatted << " " << format(nums);
        if (badNums.str().empty())
            cout << entry.name << " " << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name
                 << " invalid number(s) " << badNums.str() << endl;
    }

    return 0;
}