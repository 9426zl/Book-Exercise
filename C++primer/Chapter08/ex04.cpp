//
// Chapter08 Exericse04
//

#include <iostream>
#include <fstream>
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
	
	ReadFile("exer.txt", svec);

	index = svec.size();
	for(; i !=index; ++i)
		cout << svec[i] << endl;

	return 0;
}
		
