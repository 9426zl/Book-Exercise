//
// Chapter10 Exercise28
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    
    list<int> lst1;
    copy(vec.cbegin(), vec.cend(), inserter(lst1, lst1.begin()));
    
    list<int> lit2;
    copy(vec.cbegin(), vec.cend(), back_inserter(lit2));
    
    list<int> lst3;
    copy(vec.cbegin(), vec.cend(), front_inserter(lst3));
    
    for(auto iter1 : lst1)
    	cout << iter1 << " ";
    cout << endl;
    
    for(auto iter2 : lit2)
    	cout << iter2 << " ";
    cout << endl;
    
    for(auto iter3 : lst3)
    	cout << iter3 << " ";
    cout << endl;

	return 0;
}
