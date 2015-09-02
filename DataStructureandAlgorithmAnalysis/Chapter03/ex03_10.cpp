//
//   ex03_10.cpp
//   
//   Data Structure and Algorithm Analysis in C 2nd Edition
//   Chapter03 Exercise10
//
//   Created by Baldwin Lou on 09/01/2015.
//   Copyright (c) 2015 Baldwin Lou. All rights reserved.
//

#include <iostream>
#include <vector>

void Slove_Josephus(int M, int N)
{
	std::vector<int> ivec;
	std::vector<int>::iterator iter;
	int i = 1;
	int queuesize = N;
	
	for(;i != N + 1; ++i)
		ivec.push_back(i);
	
	iter = ivec.begin();
	while (queuesize != 0)
	{
		i = M;
		while(i != 0)
		{
			++iter;
			if (iter == ivec.end())
				iter = ivec.begin();
			--i;	
		}
		std::cout << *iter << " ";
		iter = ivec.erase(iter);
		if (iter == ivec.end())
			iter = ivec.begin();
		--queuesize;	
	}
	
	std::cout << "\nThe job is done." << std::endl;		
}

int main()
{
	int M, N;
	
	std::cout << "Input the queue length N:" << std::endl;
	std::cin >> N ;
	std::cout << "Input the gap length M:" << std::endl;
	std::cin >> M ;
	std:: cout << "\n" << std::endl;
	
	Slove_Josephus(M, N);
	
	return 0;
}
