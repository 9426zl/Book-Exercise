//
//   ex03_19.cpp
//   
//   Data Structure and Algorithm Analysis in C 2nd Edition
//   Chapter03 Exercise19
//
//   Created by Baldwin Lou on 09/01/2015.
//   Copyright (c) 2015 Baldwin Lou. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

int main()
{
	std::vector<char> strvec;
	std::vector<int> ivec;
	std::vector<char>::iterator iter;
	std::string elem;
	int count = 0, oper1, oper2, resu ;
	
	std::cin >> elem;
	for (auto i : elem)
		strvec.push_back(i);
		
    for(auto s : strvec)
		std::cout << s << " ";
	std::cout << std::endl;
	
	
	iter = strvec.begin();
	while (iter != strvec.end())
	{
		if (isdigit(int(*iter))){
			ivec.push_back(int(*iter - '0'));
			++count;	
		} else {
			if(count >= 2) {
				if(*iter == '-'){
					oper2 = ivec.back();
					ivec.pop_back();
					oper1 = ivec.back();
					ivec.pop_back();
					resu = oper1 - oper2;
					ivec.push_back(resu);
				} else if(*iter == '+'){
					oper2 = ivec.back();
					ivec.pop_back();
					oper1 = ivec.back();
					ivec.pop_back();
					resu = oper1 + oper2;
					ivec.push_back(resu);
				} else if(*iter == '*'){
					oper2 = ivec.back();
					ivec.pop_back();
					oper1 = ivec.back();
					ivec.pop_back();
					resu = oper1 * oper2;
					ivec.push_back(resu);
				} else if(*iter == '/'){
					oper2 = ivec.back();
					ivec.pop_back();
					oper1 = ivec.back();
					ivec.pop_back();
					resu = oper1 / oper2;
					ivec.push_back(resu);
				}
				--count;					
			} else 
				std::cerr << "The input fomulation is wrong." << std::endl;		
		}
		++iter;
	}
	
	std::cout << "The calculation result is: " << ivec.front() << std::endl;
	
	return 0;
}
