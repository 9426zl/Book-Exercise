//
// Chapter12 Exericse27
//

#include <iostream>
#include <fstream>
#include "ex27.h"

int main()
{
	std::ifstream infile("test.txt");
	
	TextQuery sq(infile);
	while (true) {
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout, sq.query(s)) << std::endl;
    }
    
    return 0;	
}
