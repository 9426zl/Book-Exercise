//
//  ex16.cpp
//  Exercise 9.16
//

#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<int> ilist(5, 2);
	vector<int> ivec1(5, 2);

	if(vector<int>(ilist.begin(), ilist.end()) == ivec1)
		cout << "ilist == ivec1" << endl;
	else
		cout << "ilist != ivec1" << endl;

	return 0;
}