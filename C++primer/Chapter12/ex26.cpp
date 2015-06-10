//
// Chapter12 Exercise26
//

#include <iostream>
#include <string>
#include <memory>

using namespace std;

void func(int n)
{
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	string s;
	auto q = p;

	while (cin >> s && q != p + n)
		alloc.construct(q++, s);

	while(q != p)
	{	
		cout << *--q << " ";
		alloc.destroy(q);
	}

	alloc.deallocate(p, n);
}