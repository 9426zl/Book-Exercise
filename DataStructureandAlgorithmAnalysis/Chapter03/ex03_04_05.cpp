//
//   ex03_04_05.cpp
//   
//   Data Structure and Algorithm Analysis in C 2nd Edition
//   Chapter03 Exercise04 and Exercise05
//
//   Created by Baldwin Lou on 09/01/2015.
//   Copyright (c) 2015 Baldwin Lou. All rights reserved.
//

#include <iostream>
#include <list>

int main()
{
	std::list<int> L1{1, 3, 5, 7, 9};
	std::list<int> L2{2, 4, 6, 8, 10};
	
	// L1 union L2
	std::list<int>::iterator iterL1 = L1.begin();
	std::list<int>::iterator iterL2 = L2.begin();
	
	while((iterL1 != L1.end()) || (iterL2 != L2.end()))
	{
		if (*iterL1 == *iterL2)
		{
			++iterL1;
			++iterL2;
		}
		else {
			if (*iterL1 > *iterL2){
				iterL1 = L1.insert(iterL1, *iterL2);
				++iterL1;++iterL1;
				++iterL2;
			}	
			else {
				++iterL1;
				iterL1 = L1.insert(iterL1, *iterL2);
				iterL1++;
				iterL2++;
			}
		}
	}
	
	while (iterL1 == L1.end() && iterL2 != L2.end())
	{
		L1.push_back(*iterL2);
		++iterL2;
	}
	
	while(iterL1 != L1.end() && iterL2 == L2.end())
	{
		L2.push_back(*iterL1);
		++iterL1;
	}
	
	iterL1 = L1.begin();
	while(iterL1 != L1.end())
		std::cout << *iterL1++ << " ";
	std::cout << "\nThe lists union operation is done." << std::endl;
	
    
	// L1 intersect L2 L1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	iterL1 = L1.begin();
	iterL2 = L2.begin();
	
	while((iterL1 != L1.end()) && (iterL2 != L2.end()))
	{
		if (*iterL1 == *iterL2)
		{
			++iterL1;
			++iterL2;
		}
		else if(*iterL1 > *iterL2)
			{
				iterL1 = L1.erase(iterL1);
				++iterL2;
			}
		else {
			iterL1 = L1.erase(iterL1);
		}
	}
	
	while(iterL1 != L1.end() && iterL2 == L2.end())
		L1.erase(iterL1, L1.end());
	
	iterL1 = L1.begin();
	while(iterL1 != L1.end())
		std::cout << *iterL1++ << " ";
	std::cout << "\nThe lists intersection operation is done." << std::endl;
	
	return 0;
}
