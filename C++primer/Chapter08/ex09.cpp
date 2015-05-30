#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

istream& func(istream& is)
{
	string buf;
	while(is >> buf)
		cout << buf << endl;
	is.clear();
	return is;
}

int main()
{
	string buf; 
	ifstream input("exer.txt");
	 if(input)
	 {
		while(getline(input, buf))
		{
			istringstream record(buf);
			func(record);
		}
	 }
	 
}
