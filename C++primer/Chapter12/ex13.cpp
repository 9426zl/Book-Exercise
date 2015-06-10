//
// Chapter12 Exercise13
//

#include <iostream>
#include <memory>

using namespace std;

int main()
{
	auto sp = make_shared<int>();
	auto p = sp.get();
	delete p;

	return 0;
}