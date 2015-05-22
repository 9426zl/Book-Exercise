#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	//vector<int> v1;
	//vector<int> v2(10);
	vector<int> v3(10, 40);
	//vector<int> v4{10};
	//vector<int> v5{10, 42};
	int index = v3.size();
	int i;

	if (index != 0)
	{
		for (i = 0; i < index; i++)
			cout << v3[i] << " ";
	}
	else
		cout << "The vector is empty";
	cout << endl;
}