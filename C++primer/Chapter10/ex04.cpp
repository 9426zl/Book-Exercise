//
// Chapter10 Exericse04
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> dvec{1.0, 2.0, 3.0, 4.0, 5.0};
	double sum;
	
	sum = accumulate(dvec.cbegin(), dvec.cend(), 0.0);
	cout << sum << endl;
	
	return 0;
	
}

