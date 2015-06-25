//
// Chapter16 Exercise16
//

#include <iostream>
#include <vector>
#include "vec.h"

int main()
{
	Vec<int> iv = {1, 2, 3, 4, 5};
	Vec<int> iv2;

	iv2 = iv;
	iv2.push_back(6);
	
	for(auto iter : iv2)
		std::cout << iter << " ";
	
	std::cout << "\n"; 
	std::cout << "size:" <<iv2.size() << "\n";
	std::cout << "capacity" << iv2.capacity() << std::endl;

	return 0;
}