//
// Chapter16 Exercise05
//

#include <iostream>
#include <string>

template<typename T>
void print( T (&arr))
{
	for (auto elem :arr)
		std::cout << elem << std::endl;
}

int main()
{
	int a[] = {1, 2, 3};
	char b[] = {'a', 'b', 'c'};
	
	print(a);
	print(b);

	return 0;
}