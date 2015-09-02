//
//   ex03_20.cpp
//   
//   Data Structure and Algorithm Analysis in C 2nd Edition
//   Chapter03 Exercise20
//
//   Created by Baldwin Lou on 09/01/2015.
//   Copyright (c) 2015 Baldwin Lou. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cctype>

std::vector<char> 
deal_openbrakers(std::vector<char> invec,
				  std::vector<char>::iterator iter)
{
	std::vector<char> resbvec, optbvec;
	char tmp;
	
	while (*iter != ')')
	{
		if (isdigit(int(*iter))){
			resbvec.push_back(*iter);				
		}
		else if (*iter == '*' || *iter == '/')
		{
			tmp = *iter;
			++iter;
			resbvec.push_back(*iter);
			resbvec.push_back(tmp);
		} 
		else if (*iter == '+' || *iter == '-')
		{
			optbvec.push_back(*iter);	
		} 
		else 
		{
			std::cout << "The input is wrong" << std::endl;
			break;
		}
		++iter;
    }
    
	while(!optbvec.empty())
	{
		tmp = optbvec.back();
		resbvec.push_back(tmp);
		optbvec.pop_back();
	}	
	
	return resbvec;
}

int main()
{
	std::vector<char> invec, resvec, optvec, tmpvec;
	std::vector<char>::iterator iter, tmpiter;
	std::string elem;
	char tmp;
	int count = 0, oper1, oper2, resu ;
	
	std::cin >> elem;
	for (auto i : elem)
		invec.push_back(i);
			
    for(auto s : invec)
		std::cout << s << " ";
	std::cout << std::endl;
	
	iter = invec.begin();
	while (iter != invec.end())
	{
		if (*iter == '(')
		{
			++iter;
			tmpvec = deal_openbrakers(invec, iter);
			tmpiter = tmpvec.begin();
			while (tmpiter != tmpvec.end())
			{
				resvec.push_back(*tmpiter);
				++tmpiter;
				++iter;
			}
			--iter;			
		} 
		else if (isdigit(int(*iter)))
		{
			resvec.push_back(*iter);				
		}
		else if (*iter == '*' || *iter == '/')
		{
			tmp = *iter;
			++iter;
			if (*iter == '(')
			{
				++iter;
				tmpvec = deal_openbrakers(invec, iter);
				tmpiter = tmpvec.begin();
				while (tmpiter != tmpvec.end())
				{
					resvec.push_back(*tmpiter);
					++tmpiter;
					++iter;
				}
				--iter;			
			} 
			resvec.push_back(tmp);
		} 
		else if (*iter == '+' || *iter == '-')
		{
			optvec.push_back(*iter);	
		} 
		else 
		{
			std::cout << "The input is wrong" << std::endl;
			break;
		}
		
		++iter;			
	}
	
	while(!optvec.empty())
	{
		tmp = optvec.back();
		resvec.push_back(tmp);
		optvec.pop_back();
	}
	
	for(auto iter : resvec)
		std::cout << iter << " ";
	std::cout << std::endl;
	
	return 0;	
}
