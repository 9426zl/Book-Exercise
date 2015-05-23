#include <iostream>

using namespace std;

int main()
{
	int a1[5] = {1, 2, 3, 4, 5};
	int a2[5] = {6, 7, 8, 9, 10};

	for (int i = 0; i < 5; ++i)
	{
		if (a1[i] != a2[i])
		{
			cout << "The arrays are not equal" << endl;
			break;
		}
	}

	return 0;
}