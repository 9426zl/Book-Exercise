#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void ReadFile(const string& fileName, vector<string>& sVec)
{
	string buf;

	ifstream input(fileName);

	if(input)
	{
		while(getline(input, buf))
			sVec.push_back(buf);
	}
}


int main()
{
	vector<string> svec;
	decltype(svec.size()) index, i = 0;
	string buf;

	ReadFile("exer.txt", svec);

	index = svec.size();
	for(; i !=index; ++i)
	{
		istringstream line(svec[i]);
		while(line >> buf)
			cout << buf << endl;
	}

	return 0;
}