//
//   ex03_02.cpp
//   
//   Data Structure and Algorithm Analysis in C 2nd Edition
//   Chapter03 Exercise02 
//
//   Created by Baldwin Lou on 09/01/2015.
//   Copyright (c) 2015 Baldwin Lou. All rights reserved.
//

#include <iostream>
#include <vector>


template <typename T>
void PrintLots(std::vector<T> L, std::vector<int> P)
{
	std::vector<int>::iterator iterP = P.begin();
	std::vector<int>::iterator iterEnd = P.end();
	
	while(iterP != iterEnd)
	{
		std::cout << L.at(*iterP) << " ";
		++iterP;
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> L{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int> P{0, 2, 4, 6, 8};
	
	PrintLots(L, P);
	
	return 0;
}
