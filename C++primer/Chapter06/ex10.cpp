#include <iostream>
#include <string>

using namespace std;

void swap(int *ip1, int *ip2)
{
	int temp;
	temp = *ip1;
	*ip1 = *ip2;
	*ip2 = temp;
}

int main()
{
	int i1 = 1, i2 = 2;
	int *p1 = &i1, *p2 = &i2;
	
	swap(p1, p2);
	cout << i1 << " " << i2;

	return 0;
}