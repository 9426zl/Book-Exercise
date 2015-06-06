//
// Chapter10 Exercise21
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i = 10;

	auto func = [&i]()
	{return --i? false : true;};

	while(!func())
		cout << i << " ";
	cout << i << endl;

	return 0;
}