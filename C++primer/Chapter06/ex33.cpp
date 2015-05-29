#include <iostream>
#include <vector>

using namespace std;

void vec_print(vector<int> ivec)
{
	static size_t i = 0;

	while(i != ivec.size())
	{
		cout << ivec[i++] << endl;
		vec_print(ivec);
	}
}

int main()
{
	vector<int> ivec(10, 10);
	vec_print(ivec);

	return 0;
}

