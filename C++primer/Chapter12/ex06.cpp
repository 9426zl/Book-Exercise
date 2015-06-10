//
// Chapter12 Exercise06
//

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

vector<int>*
dynamic_vector_generator()
{
	vector<int>* ptr = new vector<int>();
	return ptr;
}

void dynamic_vector_reader(vector<int>* ptr)
{
	int i;
	while(cin >> i)
		ptr->push_back(i);
}

void dynamic_vector_printer(vector<int> *ptr)
{
	for(const auto &iter : *ptr)
		cout << iter << " ";
	cout << endl;
}

int main()
{
	vector<int>* ptr = dynamic_vector_generator();
	dynamic_vector_reader(ptr);
	dynamic_vector_printer(ptr);

	delete ptr;

	return 0;
}