//
// Chapter12 Exercise07
//

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

shared_ptr<vector<int>>
dynamic_vector_generator()
{
	return make_shared<vector<int>>();
}

void dynamic_vector_reader(shared_ptr<vector<int>> ptr)
{
	int i;
	while(cin >> i)
		ptr->push_back(i);
}

void dynamic_vector_printer(shared_ptr<vector<int>> ptr)
{
	for(const auto &iter : *ptr)
		cout << iter << " ";
	cout << endl;
}

int main()
{
	shared_ptr<vector<int>> ptr = dynamic_vector_generator();
	dynamic_vector_reader(ptr);
	dynamic_vector_printer(ptr);

	return 0;
}