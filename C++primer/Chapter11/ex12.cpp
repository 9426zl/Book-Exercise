//
// Chapter11 Exercise12
//

#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main()
{
	vector<pair<string, int>> pvec;
	string str;
	int i;

	while(cin >> str >> i)
		pvec.push_back(make_pair(str, i));

	for(const auto iter : pvec)
		cout << iter.first << " " << iter.second << endl;

	return 0;
}
