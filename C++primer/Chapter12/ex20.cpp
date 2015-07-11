//
// Chapter12 Exercise20
//

#include <iostream>
#include <fstream>
#include "ex19.h"

int main()
{
	std::ifstream infile("test.txt");
	std::string str;
	StrBlob sblob;
	
	while(std::getline(infile, str))
	{
		sblob.push_back(str);
	}
	
	for(StrBlobPtr pbeg(sblob.begin()); pbeg != sblob.end(); pbeg.incr())
		std::cout << pbeg.deref() << std::endl;
	
	return 0;
}
