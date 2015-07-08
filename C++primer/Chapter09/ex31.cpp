//
// Chapter09 Exercise31
//

#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto iter = vi.begin();
	while(iter != vi.end())
	{
		if(*iter % 2) {
			iter = vi.insert(iter, *iter);
			advance(iter, 2);
		} else
			iter = vi.erase(iter);
	}

	cout << "list: ";
	for(auto i : vi)
		cout << i << " ";

	cout << endl;

	forward_list<int> vfl = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto iter2 = vfl.begin(), prev2 = vfl.before_begin();

	while (iter2 != vfl.end())
	{    
        if (*iter2 % 2) {        
            iter2 = vfl.insert_after(prev2, *iter2);   
            advance(iter2, 2);
            advance(prev2, 2);
        } else        
            iter2 = vfl.erase_after(prev2);
    }

	cout << "forward_list:";
    for (auto i : vfl)
        cout << i << " ";
	cout << endl;    

	return 0;
}
